#include "car.h"

#include <iostream>

Car::Car(std::string brand, std::string model, int yearModel)
    : brand(brand), model(model), yearModel(yearModel)
{
}

void Car::printData() const
{
    std::cout << "Merkki: " << brand << std::endl;
    std::cout << "Malli: " << model << std::endl;
    std::cout << "Vuosimalli: " << yearModel << std::endl;
}
