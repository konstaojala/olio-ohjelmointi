#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
private:
    std::string name;
    int studentNumber = 0;
    double average = 0.0;

public:
    void setName(const std::string &newName);
    void setStudentNumber(int newStudentNumber);
    void setAverage(double newAverage);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif

