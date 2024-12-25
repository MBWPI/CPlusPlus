#include <iostream>
using namespace std;

// Main function where the program starts execution
int main() {
  
  // Declare an array of 50 double elements
  double alpha[50];

  // Declare an integer variable to be used as an index in loops
  int index;

  // Initialize the first 25 elements of the array with the square of their index
  for (index = 0; index < 25; index++)
    alpha[index] = index * index;

  // Initialize the remaining 25 elements of the array with three times their index
  for (index = 25; index < 50; index++)
    alpha[index] = index * 3;

  // Display all elements in the array with a formatted output
  cout << "Elements in the array:" << endl;
  for (index = 0; index < 50; index++) {
    // Print a new line after every 10 elements for better readability
    if (index % 10 == 0)
      cout << "\n";
    // Print the current element
    cout << alpha[index] << " ";
  }
  cout << endl;

  // Return 0 to indicate successful execution
  return 0;
}
