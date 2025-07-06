#include <iostream>

class MyClass {
public:
    // Static data member
    static int staticData;

    // Constructor
    MyClass(int value) : data(value) {}

    // Member function to access static and non-static data members
    void display() {
        std::cout << "Static Data: " << staticData << ", Non-Static Data: " << data << std::endl;
    }

private:
    // Non-static data member
    int data;
};

// Initializing the static data member
int MyClass::staticData = 0;

int main() {
    // Creating instances of MyClass
    MyClass obj1(10);
    MyClass obj2(20);

    // Accessing and modifying static data member
    std::cout << "Initial Static Data: " << MyClass::staticData << std::endl;

    // Modifying static data member through any instance (obj1 in this case)
    obj1.staticData = 5;

    // Accessing static data member through different instances
    obj1.display();
    obj2.display();

    // Note: staticData is shared among all instances, so modifying it through one instance affects all

    return 0;
}

