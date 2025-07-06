#include <iostream>

// Virtual base class
class Shape {
public:
    // Pure virtual function for calculating area
    virtual float calculateArea() const = 0;
};

// Base class 1 inheriting from the virtual base class
class Rectangle : virtual public Shape {
protected:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementation of the virtual function
    float calculateArea() const override {
        return length * width;
    }
};

// Base class 2 inheriting from the virtual base class
class Triangle : virtual public Shape {
protected:
    float base;
    float height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    // Implementation of the virtual function
    float calculateArea() const override {
        return 0.5 * base * height;
    }
};

// Derived class inheriting from both Rectangle and Triangle
class RectangularTriangle : public Rectangle, public Triangle {
public:
    // Constructor using member initializer list to initialize base classes
    RectangularTriangle(float l, float w, float b, float h)
        : Rectangle(l, w), Triangle(b, h) {}

    // Implementation of the virtual function
    float calculateArea() const override {
        // Call the specific implementation of the virtual function from either Rectangle or Triangle
        return Rectangle::calculateArea() + Triangle::calculateArea();
    }
};

int main() {
    // Create an object of the derived class
    RectangularTriangle rt(4.0, 3.0, 4.0, 5.0);

    // Call the calculateArea function on the derived class
    float area = rt.calculateArea();

    // Display the calculated area
    std::cout << "Combined Area: " << area << std::endl;

    return 0;
}

