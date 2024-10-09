#include <iostream>
#include <vector>
#include "shape.hpp"
#include "circle.hpp"
#include "rect.hpp"

using namespace std;

int main() {
    // Create a vector of pointers to Shape
    vector<Shape*> shapes;

    // populate the vector with circs and rects
    // Populate the vector with Circle and Rectangle objects
    shapes.push_back(new Circle(5.0, 5.0, 10.0));  // Circle with center (5,5) and radius 10
    shapes.push_back(new Rectangle(0.0, 0.0, 15.0, 20.0));  // Rectangle with origin (0,0) and width 15, height 20
    shapes.push_back(new Circle(10.0, 10.0, 5.0));  // Another circle with center (10,10) and radius 5
    shapes.push_back(new Rectangle(2.0, 2.0, 8.0, 6.0));  // Another rectangle with origin (2,2), width 8, height 6

    for (Shape* shape : shapes){
        shape->draw();
    }
        // Clean up allocated memory
    for (Shape* shape : shapes) {
        delete shape;
    }
    return 0;
}