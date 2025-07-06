#include <iostream>
using namespace std;
int main() {
    // Using for loop to print numbers from 1 to 5
   cout << "Using for loop:" <<endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout <<endl;

    // Using while loop to print numbers from 1 to 5
    cout << "\nUsing while loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Using do-while loop to print numbers from 1 to 5
    cout << "\nUsing do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 5);
    cout << endl;

    return 0;
}

