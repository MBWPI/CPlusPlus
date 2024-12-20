#include <iostream>
#include <string>
using namespace std;

int main() 
{
  char userInput[50];
  
  cout << "Enter a word in lowercase letters: ";
  cin >> userInput;
  for (int i = 0; i <= strlen(userInput); i++) {
    userInput[i] = toupper(userInput[i]);
  }
  cout << userInput;
  
  return 0;
  
}
