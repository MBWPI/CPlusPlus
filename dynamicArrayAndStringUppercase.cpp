#include <iostream>
#include <string>
using namespace std;

int main() {
  
  // Pointer to hold the dynamically allocated array
  int *intList;
  int arraySize; // Variable to store the size of the array

  // Prompting the user to enter the size of the array
  cout << "Enter array size: ";
  cin >> arraySize;
  cout << endl;

  // Dynamically allocating memory for the array based on user input
  intList = new int[arraySize];

  // Character arrays to store the user's input string and its uppercase version
  char str[20];
  char upper_str[20];
  
  // Prompting the user to enter a string
  cout << "Enter a string: ";
  cin >> str;

  // Displaying the string entered by the user
  cout << "The string you entered is: " << str << endl;

  // Converting the input string to uppercase
  for (int i = 0; i < 20; i++) {
    char ch = str[i]; // Extracting each character
    if (ch != '\0') { // Ensuring not to process null character (end of string)
      upper_str[i] = toupper(ch); // Converting to uppercase
    } else {
      upper_str[i] = '\0'; // Adding null character to terminate the string
      break;
    }
  }

  // Displaying the uppercase version of the string
  cout << "The uppercase string is: " << upper_str << endl;

  // Freeing the dynamically allocated memory
  delete[] intList;

  return 0;
}
