#include "student.h"

void Student::setName(const std::string &newName)
{
    name = newName;
}

void Student::setStudentNumber(int newStudentNumber)
{
    studentNumber = newStudentNumber;
}

void Student::setAverage(double newAverage)
{
    average = newAverage;
}

std::string Student::getName() const
{
    return name;
}

int Student::getStudentNumber() const
{
    return studentNumber;
}

double Student::getAverage() const
{
    return average;
}
