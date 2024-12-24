#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tomList; // Variable to store the number of items on Tom's table

    // Prompt the user to enter the number of items
    cout << "\nHow big is the list?\n";
    cin >> tomList;

    // Use a vector to store the items, as it allows dynamic sizing
    vector<string> tomArray(tomList);

    // Prompt the user to input the items
    cout << "\nWhat is on Tom's table? (Enter " << tomList << " items)\n";

    // Clear the newline character left in the input buffer by 'cin'
    cin.ignore();

    // Loop to get the items from the user
    for (int i = 0; i < tomList; ++i) {
        cout << "Item " << i + 1 << ": ";
        getline(cin, tomArray[i]); // Read each item as a full line
    }

    // Display the items entered by the user
    cout << "\nItems on Tom's table:\n";
    for (const string &item : tomArray) { // Range-based for loop to iterate through the vector
        cout << item << endl;
    }

    return 0; // Indicate successful program execution
}
