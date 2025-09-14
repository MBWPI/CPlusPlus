// ansiConsoleColorDemo.cpp
// This program demonstrates how to use ANSI escape codes to change text color in the console output.
// For more colors, refer to https://en.wikipedia.org/wiki/ANSI_escape_code#Colors for ANSI colors by FG (Foreground).

#include <iostream> // Include the iostream library for input/output operations
using namespace std;

int main() {
    // Print text in black color using ANSI escape code "\x1b[30m"
    cout << "\n\x1b[30mThis is Black Text\n";

    // Print text in red color using ANSI escape code "\x1b[31m"
    cout << "\n\x1b[31mThis is Red Text\n";

    // Print text in green color using ANSI escape code "\x1b[32m"
    cout << "\n\x1b[32mThis is Green Text\n";

    // Print text in yellow color using ANSI escape code "\x1b[33m"
    cout << "\n\x1b[33mThis is Yellow Text\n";

    return 0; // Indicate successful program termination
}
