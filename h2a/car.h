#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
    void printData() const;
    void setBrand(const std::string &newBrand);
    void setModel(const std::string &newModel);
    void setYearModel(int newYearModel);

private:
    std::string brand;
    std::string model;
    int yearModel = 0;
};

#endif
