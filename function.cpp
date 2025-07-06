#include <iostream>
using namespace std;
// Function declaration
int add(int a, int b);
double multiply(double x, double y);
int main() {
    // Function calling
    int result1 = add(3, 5);
    double result2 = multiply(2.5, 4.0);

    cout << "Result of addition: " << result1 <<endl;
    cout << "Result of multiplication: " << result2 <<endl;
    return 0;
}

// Function definition for addition
int add(int a, int b) {
    return a + b;
}

// Function definition for multiplication
double multiply(double x, double y) {
    return x * y;
}
