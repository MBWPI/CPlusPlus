// This program calculates and displays the average of three decimal numbers

#include <iostream>
using namespace std;

int main() {
    // Declare variables to store three decimal numbers and their average
    double num1, num2, num3, average;

    // Assign values to the three numbers
    num1 = 75.35;  // First decimal number
    num2 = -35.56; // Second decimal number
    num3 = 15.76;  // Third decimal number

    // Calculate the average of the three numbers
    average = (num1 + num2 + num3) / 3;

    // Display each number
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;
    cout << "Third number: " << num3 << endl;

    // Display the calculated average
    cout << "Average: " << average << endl;

    return 0; // Indicate successful program termination
}
