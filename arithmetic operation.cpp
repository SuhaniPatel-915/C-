#include <iostream>
using namespace std;
int main() {
    // Declare two variables
    int num1, num2;

    // Get input from the user
   cout << "Enter the first number: ";
   cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (num1) / num2; // Ensure floating-point division

    // Display the results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient <<endl;

    return 0;
}

