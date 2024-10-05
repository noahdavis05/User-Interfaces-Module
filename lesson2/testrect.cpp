#include <iostream>
#include "rect.hpp"

int main() {
    Rectangle rect1;
    Rectangle rect2(10.0,5.0,20.0,15.0);

    std::cout << "Rectangle 1: Width = " << rect1.getWidth() << ", Height = " << rect1.getHeight() << ", Area = " << rect1.area() << std::endl;
    std::cout << "Rectangle 2: Width = " << rect2.getWidth() << ", Height = " << rect2.getHeight() << ", Area = " << rect2.area() << std::endl;

    return 0;
}