#pragma once

#include "shape.hpp"

class Rectangle: public Shape {
private:
    // Private variables/attributes
    // no need for x and y as they are in shape
    double width;
    double height;

public:
    // Default constructor to initialize default values if none given
    Rectangle() : Shape(0.0, 0.0), width(0.0), height(0.0) {}

    // Constructor with parameters
    Rectangle(double ix, double iy, double w, double h);

    double getWidth() const {
        return width;
    }

    double getHeight() const {
        return height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }

    double area() const {
        return width * height;
    }

    double getXOrigin() const {
        return getX();  // Using the Shape's getX() method
    }

    double getYOrigin() const {
        return getY();  // Using the Shape's getY() method
    }

    // override the draw method
    void draw() const override;
};
