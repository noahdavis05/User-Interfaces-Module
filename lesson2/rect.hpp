#pragma once

class Rectangle {
private:
    // Private variables/attributes
    double x; 
    double y; 
    double width;
    double height;

public:
    // Default constructor
    Rectangle();

    // Constructor with parameters
    Rectangle(double ix, double iy, double w, double h);

    // Getter methods
    double getWidth() const; // Mark as const
    double getHeight() const; // Mark as const

    // Other methods
    double perimeter() const; // Mark as const
    double area() const; // Mark as const
};
