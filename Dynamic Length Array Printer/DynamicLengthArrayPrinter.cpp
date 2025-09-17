#include <iostream>
using namespace std;

// Global variables for array size and iterators
int ArraySize = 1; // Default size of the array
int ArrayVariable = 0; // Iterator for accessing array elements
int ArrayVariable2 = 0; // Unused in the code

int main() {
    // Prompt the user to enter the desired size of the array
    cout << "What size is the array?\n";
    cin >> ArraySize;

    // Declare an array with the size specified by the user
    int Array[ArraySize];

    // Loop through the array to process its elements
    for (int i = 0; i < ArraySize; i++) {
        // Display the value at the current array index
        cout << Array[ArrayVariable];
        ArrayVariable++; // Increment the iterator to move to the next element
    }

    return 0; // Indicate successful program execution
}
