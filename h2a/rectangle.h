#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    double getArea() const;
    double getCircum() const;
    void setWidth(double newWidth);
    void setHeight(double newHeight);

private:
    double width = 0.0;
    double height = 0.0;
};

#endif
