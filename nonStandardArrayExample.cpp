#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tomList;

    cout << "\nHow big is the list?\n";
    cin >> tomList;

    // Use a vector for dynamic sizing
    vector<string> tomArray(tomList);

    cout << "\nWhat is on Tom's table? (Enter " << tomList << " items)\n";

    // Clear the newline character left by previous input
    cin.ignore();

    // Get list of items
    for (int i = 0; i < tomList; ++i) {
        cout << "Item " << i + 1 << ": ";
        getline(cin, tomArray[i]);
    }

    // Output the items
    cout << "\nItems on Tom's table:\n";
    for (const string &item : tomArray) {
        cout << item << endl;
    }

    return 0;
}
