#include "rect.hpp"


// Default constructor
Rectangle::Rectangle() : x(0.0), y(0.0), width(0.0), height(0.0) {}

Rectangle::Rectangle(double ix, double iy, double w, double h)
    : x(ix), y(iy), width(w), height(h) {}

// Getter for the width
double Rectangle::getWidth() const {
    return width;
}

// Getter for height
double Rectangle::getHeight() const {
    return height;
}

// Calculate perimeter
double Rectangle::perimeter() const {
    return 2 * width + 2 * height;
}

// Calculate area
double Rectangle::area() const {
    return width * height;
}