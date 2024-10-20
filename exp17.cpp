#include <iostream>
using namespace std;

# define pi 3.14

// Overloaded function to find the area of a circle
void findArea(float radius) {
    cout << "Shape: Circle" << endl;
    cout << "Radius: " << radius << endl;
    float area = pi * radius * radius;
    cout << "Area: " << area << endl << endl;
}

// Overloaded function to find the area of a rectangle
void findArea(int length, int width) {
    cout << "Shape: Rectangle" << endl;
    cout << "Length: " << length << ", Width: " << width << endl;
    int area = length * width;
    cout << "Area: " << area << endl << endl;
}

// Overloaded function to find the area of a square
void findArea(long side) {
    cout << "Shape: Square" << endl;
    cout << "Side: " << side << endl;
    long area = side * side;
    cout << "Area: " << area << endl << endl;
}

// Overloaded function to find the area of a triangle
void findArea(unsigned int base, unsigned int height) {
    cout << "Shape: Triangle" << endl;
    cout << "Base: " << base << ", Height: " << height << endl;
    double area = (base * height)/2;
    cout << "Area: " << area << endl << endl;
}

// Overloaded function to find the area of a trapezoid
void findArea(short base1, short base2, short height) {
    cout << "Shape: Trapezoid" << endl;
    cout << "Base1: " << base1 << ", Base2: " << base2 << ", Height: " << height << endl;
    float area = ((base1 + base2) * height)/2;
    cout << "Area: " << area << endl << endl;
}

int main() {
    findArea(5.0f); // Circle
    findArea(4, 7); // Rectangle
    findArea(10L); // Square
    findArea(6U, 8U); // Triangle
    findArea(3, 7, 4); // Trapezoid
}
