#include <iostream>
#include <string> // For string functions
using namespace std;

int main() 
{
    // Declare a character array to hold user input (up to 50 characters)
    char userInput[50];
  
    // Prompt the user to enter a word in lowercase letters
    cout << "Enter a word in lowercase letters: ";
    cin >> userInput; // Store the input in the 'userInput' array

    // Iterate through each character of the user input
    for (int i = 0; i <= strlen(userInput); i++) {
        userInput[i] = toupper(userInput[i]); // Convert each character to uppercase
    }

    // Output the converted string
    cout << userInput;
  
    return 0; // Indicate successful program termination
}
