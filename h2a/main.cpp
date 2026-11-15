#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

int main()
{
    // Car-olio pinomuistiin.
    Car car;
    car.setBrand("Mitsubishi");
    car.setModel("Galant");
    car.setYearModel(2002);
    car.printData();

    // Rectangle-olio kekomuistiin. Muisti vapautetaan delete-komennolla.
    Rectangle *rectangle = new Rectangle();
    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);
    std::cout << "Suorakulmion pinta-ala: " << rectangle->getArea() << '\n';
    std::cout << "Suorakulmion ymparysmitta: " << rectangle->getCircum() << '\n';
    delete rectangle;

    // Student-olio kekomuistiin pointerilla.
    auto student = std::make_unique<Student>();
    student->setName("Janne Virtanen");
    student->setStudentNumber(54321);
    student->setAverage(3.9);
    std::cout << "Opiskelijan nimi: " << student->getName() << '\n';
    std::cout << "Opiskelijanumero: " << student->getStudentNumber() << '\n';
    std::cout << "Keskiarvo: " << student->getAverage() << '\n';

    return 0;
}
