#include <iostream>
using namespace std;

// This program demonstrates basic operations on an integer array, 
// including initialization, modification, and output of elements.

int list[10]; // Declares a one-dimensional array to hold 10 integer elements.

int main() {

    // Initializing specific elements of the array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    list[4] = 5;
    list[5] = 6;

    // Output the values of selected array elements
    cout << list[5] << endl << list[3];
    cout << endl << list[2] << endl;

    // Update the value of the 6th element by adding the 4th and 3rd elements
    list[5] = list[3] + list[2];

    // Output updated and other selected values
    cout << endl << list[5] << endl;
    cout << list[3] << endl << list[2];

    // Modify all elements of the array using a loop
    for (int i = 0; i < 10; i++) {
        list[i] = list[i] + i; // Adds the index 'i' to each element in the array
        cout << list[i]; // Output each updated element (this is incorrectly placed in the loop)
    }

    return 0; // Indicate that the program executed successfully
}
