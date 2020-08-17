#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};

#endif