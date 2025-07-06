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

    // Logical AND operator
    bool andResult = (num1 > 0) && (num2 > 0);

    // Logical OR operator
    bool orResult = (num1 > 0) || (num2 > 0);

    // Logical NOT operator
    bool notResult = !(num1 == num2);

    // Display the results
    cout << "Logical AND Result: " << andResult <<endl;
    cout << "Logical OR Result: " << orResult << endl;
    cout << "Logical NOT Result: " << notResult << endl;

    return 0;
}

