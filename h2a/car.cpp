#include "car.h"

#include <iostream>

void Car::printData() const
{
    std::cout << "Auto: " << brand << " " << model
              << ", valmistusvuosi: " << yearModel << '\n';
}

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const std::string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}
