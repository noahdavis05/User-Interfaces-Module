#include "rect.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

// Default constructor

Rectangle::Rectangle(double ix, double iy, double w, double h)
    : Shape(ix, iy), width(w), height(h) {
        if (width <= 0 || height <= 0){
            throw std::invalid_argument("width or height can be zero or less!");
        }
    }

// implementation of the draw method
void Rectangle::draw() const {
    cout << "Drawing Rectangle(X=" << getX() << " Y=" << getY() << ") of width=" << getWidth() << " and height=" << getHeight() << endl;
}

