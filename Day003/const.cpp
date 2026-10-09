// This is day 3 of the C++ Learning Journey
// This is just a simple program to demonstrate the use of const in C++
/* const specifies that a variable's value is constant and 
tells the compiler that it cannot be changed (read-only)*/

#include <iostream>

int main() {
    const double PI = 3.14159;
    double radius = 10.0;
    double circumference = 2 * PI * radius;
    const int LIGHT_SPEED = 299792458; // in meters per second

    std::cout << "Circumference of the circle: " << circumference << "cm" << '\n';
    std::cout << "Speed of light: " << LIGHT_SPEED << " m/s" << '\n';

    return 0;
}