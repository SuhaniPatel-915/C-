#include <iostream>
using namespace std;
int main() {
    const int arraySize = 5; // Size of the array

    // Declare an array of integers
    int myArray[arraySize];

    // Initialize the array elements
    for (int i = 0; i < arraySize; ++i) {
        myArray[i] = i * 2; // Assigning values (in this case, even numbers)
    }

    // Display the contents of the array
    cout << "Array elements: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }

    return 0;
}

