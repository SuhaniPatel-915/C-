#include <iostream>
using namespace std;
int main() {
    // Declare a variable
    int number = 42;

    // Declare a pointer and initialize it to the address of the variable
    int *pointerToNumber = &number;

    // Display the value and address of the variable using the pointer
    cout << "Value of number: " << number <<endl;
    cout << "Address of number: " << &number <<endl;

    // Display the value and address of the variable using the pointer
    cout << "Value via pointer: " << *pointerToNumber <<endl;
    cout << "Address via pointer: " << pointerToNumber <<endl;

    // Modify the value of the variable through the pointer
    *pointerToNumber = 99;

    // Display the updated value of the variable
    cout << "Updated value of number: " << number <<endl;

    return 0;
}

