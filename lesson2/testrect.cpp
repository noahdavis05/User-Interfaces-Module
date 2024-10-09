#include "rect.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    try {
        // Create a rectangle with valid dimensions
        Rectangle rect1(2.0, 3.0, 4.0, 5.0);
        cout << "Rectangle 1: width = " << rect1.getWidth() << ", height = " << rect1.getHeight() << endl;
        cout << "Perimeter: " << rect1.perimeter() << endl;
        cout << "Area: " << rect1.area() << endl;

        // Create a rectangle with invalid dimensions to trigger the exception
        Rectangle rect2(1.0, 2.0, 3.0, 4.0); // This will throw an exception
        cout << "This line will not be executed if an exception is thrown." << endl;

    } catch (const std::invalid_argument& e) {
        // Handle the exception and display a helpful message
        cerr << "Error: " << e.what() << endl;
        cerr << "Invalid dimensions! Width and height must be greater than zero." << endl;
        return 1; // Gracefully exit the program with a non-zero status
    }

    cout << "Program finished successfully." << endl;
    return 0; // Exit the program normally
}
