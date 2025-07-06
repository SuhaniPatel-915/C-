#include <iostream>
using namespace std;
int main() {
    // Demonstrating if-else statement
    int num1 = 10;
    int num2 = 20;

    cout << "Using if-else statement:" << endl;
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else {
        cout << num2 << " is greater than or equal to " << num1 << endl;
    }

    // Demonstrating switch statement
    char grade = 'B';

    cout << "\nUsing switch statement:" << endl;
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Satisfactory." << endl;
            break;
        default:
            cout << "Needs improvement." << endl;
    }

    // Demonstrating ternary operator
    int x = 5;
    int y = 10;

    cout << "\nUsing ternary operator:" << endl;
    int result = (x > y) ? x : y;
    cout << "The larger value is: " << result << endl;

    return 0;
}

