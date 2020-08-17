#include <iostream>
#include "rectangle.h"
#include <cstdlib>
using namespace std;

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return length * width;
}

int main () {
    Rectangle box;
    double rectWidth;
    double rectLength;

    cout << "What is the length? ";
    cin >> rectLength;
    cout << "What is the width ";
    cin >> rectWidth;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "Area: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;
}


