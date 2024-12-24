// stringArrayIterationDemo.cpp
// Demonstrates different ways of iterating through a character array in C++.

#include <iostream>
#include <string>
using namespace std;

// Global character array initialized with the string "Shelly".
char name[8] = "Shelly";

int main() {
    // Display introductory information.
    cout << endl;
    cout << "Chapter 8" << endl; // Reference to chapter for context.
    cout << "Exercise 36" << endl; // Reference to exercise for context.
    cout << endl;
  
    // a. Print the entire string using a single cout statement.
    cout << "a." << endl;
    cout << name; // Outputs the string stored in the character array.
    cout << endl << endl;

    // b. Print the string using a for loop to iterate through each character.
    cout << "b." << endl;
    for (int j = 0; j < 6; j++) // Loops through the first 6 characters of the array.
        cout << name[j]; // Outputs each character one by one.
    cout << endl << endl;

    // c. Print the string using a while loop until the null terminator is encountered.
    cout << "c." << endl;
    int j = 0; // Initialize index.
    while (name[j] != '\0') // Continue until the null character '\0' is reached.
        cout << name[j++]; // Outputs each character and increments the index.
    cout << endl << endl;

    // d. Print the entire character array, including uninitialized elements.
    cout << "d." << endl;
    j = 0; // Reset index.
    while (j < 8) // Iterate through all 8 elements in the array.
        cout << name[j++]; // Outputs each element, including uninitialized ones.
    cout << endl << endl;
}
