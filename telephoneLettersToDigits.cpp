#include <iostream>
#include <string>
using namespace std;

int main()
{
    string letter; // Stores the user's input (telephone number in letters)
    int count = 0; // Keeps track of how many digits have been converted

    // Loop continues until the user enters 'n' or 'N' to stop
    while (letter != "n" && letter != "N")
    {
        cout << "Enter a telephone number in letters: ";
        getline(cin, letter); // Reads the entire line, allowing spaces
        cout << endl;

        cout << "The telephone number entered is: " << letter << endl;

        cout << "The corresponding telephone digit is: ";
        int i = 0;

        // Iterate through each character of the input
        while (i < letter.length())
        {
            bool notSpace = true; // Flag to check if the character is not a space

            // Convert each letter to the corresponding telephone digit
            switch (letter[i])
            {
                case 'A': case 'a': case 'B': case 'b': case 'C': case 'c':
                    cout << "2";
                    count++;
                    break;
                case 'D': case 'd': case 'E': case 'e': case 'F': case 'f':
                    cout << "3";
                    count++;
                    break;
                case 'G': case 'g': case 'H': case 'h': case 'I': case 'i':
                    cout << "4";
                    count++;
                    break;
                case 'J': case 'j': case 'K': case 'k': case 'L': case 'l':
                    cout << "5";
                    count++;
                    break;
                case 'M': case 'm': case 'N': case 'n': case 'O': case 'o':
                    cout << "6";
                    count++;
                    break;
                case 'P': case 'p': case 'Q': case 'q': case 'R': case 'r': case 'S': case 's':
                    cout << "7";
                    count++;
                    break;
                case 'T': case 't': case 'U': case 'u': case 'V': case 'v':
                    cout << "8";
                    count++;
                    break;
                case 'W': case 'w': case 'X': case 'x': case 'Y': case 'y': case 'Z': case 'z':
                    cout << "9";
                    count++;
                    break;
                case ' ': // Skip spaces
                    notSpace = false;
                    break;
                default: // Handle invalid characters
                    cout << "Invalid input.";
            }

            // Insert a hyphen after the third digit
            if (count == 3 && notSpace)
                cout << "-";

            // Stop processing after 7 digits
            if (count == 7)
                break;

            i++;
        }
        cout << endl;

        count = 0; // Reset the count for the next input

        // Prompt the user to continue or exit
        cout << "\nDo you want to enter another telephone number (y/n)?: ";
        cin >> letter;

        cin.ignore(); // Clear the input buffer
    }
    return 0;
}
