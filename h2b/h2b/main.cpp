#include "car.h"

#include <iostream>
#include <vector>

int main()
{
    //Paikallinen vektorimuuttuja
    std::vector<Car> carList;

    //Lisätään kolme car-oliota vektoriin
    carList.emplace_back("Nissan", "Micra", 2000);
    carList.emplace_back("Ford", "Escort", 1982);
    carList.emplace_back("BMW", "M5", 2026);

    std::cout << "Toinen auto:" << std::endl;
    carList[1].printData();

    std::cout << "\nKaikki autot:" << std::endl;
    for (const Car &car : carList) {
        car.printData();
        std::cout << std::endl;
    }

    return 0;
}
