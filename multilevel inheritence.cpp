#include <iostream>

// Base class
class Shape {
public:
    void displayShape() const {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class 1 (inherits from Shape)
class Circle : public Shape {
public:
    void displayCircle() const {
        std::cout << "This is a circle." << std::endl;
    }
};

// Derived class 2 (inherits from Circle)
class ColoredCircle : public Circle {
public:
    void displayColoredCircle() const {
        std::cout << "This is a colored circle." << std::endl;
    }
};

int main() {
    // Creating an object of the most derived class
    ColoredCircle coloredCircle;

    // Calling functions from all levels of inheritance
    coloredCircle.displayShape();         // Calls displayShape() from Shape
    coloredCircle.displayCircle();        // Calls displayCircle() from Circle
    coloredCircle.displayColoredCircle(); // Calls displayColoredCircle() from ColoredCircle

    return 0;
}

