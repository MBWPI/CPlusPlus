# Dynamic-Length Array Printer (C++ Console)

This program asks the user for an array size, allocates an array of that size, and then attempts to print every element.

> **Important behavior note:** As written, the array elements are **never initialized**, so the numbers printed are **indeterminate (garbage) values**. Also, this code uses a **Variable Length Array (VLA)** (`int Array[ArraySize];`), which is **not standard C++** (it’s a GNU/Clang extension). See the *Make it Standard-Compliant* section below for a portable version.

---

## Files
- `main.cpp` — your source code (you can keep your filename; commands below assume `main.cpp`)
- `README.md` — this guide

## Requirements
- A C++ compiler
  - **macOS/Linux:** g++ (GCC) or clang++
  - **Windows:** MinGW-w64 (for `g++`) or clang; or use WSL

---

## Build

### Option 1 — Compile with GNU extensions (keeps VLA)
This will compile your current code that uses a VLA:
```bash
g++ -std=gnu++17 -O2 -Wall -Wextra -o array_printer main.cpp
```

> `-std=gnu++17` enables GNU extensions (including VLAs). If you use strict C++ mode (like `-std=c++17`), compilation will fail because VLAs aren’t part of the C++ standard.

### Option 2 — Make it Standard-Compliant (recommended)
Replace the VLA with `std::vector<int>` and either initialize or input values. Here are two safe examples:

**A. Zero-initialize and print**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ArraySize = 1;
    cout << "What size is the array?\n";
    if (!(cin >> ArraySize) || ArraySize < 0) return 0;

    vector<int> Array(ArraySize, 0); // zero-initialized

    for (int i = 0; i < ArraySize; ++i) {
        cout << Array[i];
    }
    return 0;
}
```

**B. Read values from the user and print**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int ArraySize = 1;
    cout << "What size is the array?\n";
    if (!(cin >> ArraySize) || ArraySize <= 0) return 0;

    vector<int> Array(ArraySize);
    cout << "Enter " << ArraySize << " integers:\n";
    for (int i = 0; i < ArraySize; ++i) cin >> Array[i];

    cout << "Array contents:\n";
    for (int i = 0; i < ArraySize; ++i) cout << Array[i] << (i + 1 == ArraySize ? '\n' : ' ');
    return 0;
}
```

Compile either standard-compliant example with strict C++:
```bash
g++ -std=c++17 -O2 -Wall -Wextra -o array_printer main.cpp
```

---

## Run
```bash
./array_printer
```
On Windows (PowerShell or cmd):
```powershell
array_printer.exe
```

---

## Usage

1. Launch the program.
2. When prompted, enter a non-negative integer for the array size.
3. **Original version:** The program will print an unbroken sequence of numbers (indeterminate values).
4. **Standard-compliant examples above:**
   - Example A prints zeros (because the array is zero-initialized).
   - Example B first reads values from you, then prints them back.

---

## Common Gotchas

- **Uninitialized values:** In the original code, printing `Array[i]` without writing anything to it first produces indeterminate output.
- **Global variables:** The original uses global iterators (`ArrayVariable`, etc.) which is unnecessary and risky. Prefer local loop indices like `for (int i = 0; i < n; ++i)`.
- **VLA is non-standard:** Use `std::vector<int>` for portability.
- **Bounds:** Always check that the size is non-negative and reasonable.

---

## Suggested Improvements (if you keep the original style)

- Initialize elements before printing:
  ```cpp
  for (int i = 0; i < ArraySize; ++i) {
      Array[i] = i; // or any rule you like
  }
  ```
- Print with spacing or newlines for readability:
  ```cpp
  for (int i = 0; i < ArraySize; ++i) {
      cout << Array[i] << (i + 1 == ArraySize ? '\n' : ' ');
  }
  ```

---

## License
Feel free to use and modify this program for learning and personal projects.
