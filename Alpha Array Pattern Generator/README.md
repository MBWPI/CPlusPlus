# Alpha Array Pattern Generator

This is a simple C++ console program that fills an array of 50 `double` values with two patterns and prints them in a tidy grid:

- Index `0`–`24`: value = `index * index` (squares)  
- Index `25`–`49`: value = `index * 3`

It then displays the entire array, breaking the output into rows of 10 numbers for readability.

---

## Files
- **alpha_array_pattern.cpp** – main C++ source file (rename your file to this if you like)
- **README.md** – this guide

## Requirements
- A C++ compiler (e.g., **g++** from GCC or Clang)
- macOS, Linux, or Windows (with MinGW or WSL)

## Build
### macOS / Linux
```bash
g++ -std=c++11 -O2 -Wall -Wextra -o alpha_array alpha_array_pattern.cpp
```

### Windows (MinGW)
```bash
g++ -std=c++11 -O2 -Wall -Wextra -o alpha_array.exe alpha_array_pattern.cpp
```

## Run
### macOS / Linux
```bash
./alpha_array
```

### Windows
```powershell
alpha_array.exe
```

## Expected Output (example)

```
Elements in the array:


0 1 4 9 16 25 36 49 64 81

100 121 144 169 196 225 256 289 324 361

400 441 484 529 576 75 78 81 84 87

90 93 96 99 102 105 108 111 114 117

120 123 126 129 132 135 138 141 144 147

```

> Note: Spacing and line breaks match the program’s formatting (a new line is printed before every 10th element, including the first).

## How it Works
1. Declares `double alpha[50];`
2. Fills indices `0..24` with `i*i`
3. Fills indices `25..49` with `i*3`
4. Prints all 50 elements, starting a new line whenever `index % 10 == 0`

## Customize
- Change the first loop to try cubes: `alpha[index] = index * index * index;`
- Change the second loop’s multiplier (e.g., `index * 5`).
- Adjust how many values per line by modifying the `if (index % 10 == 0)` check.

## Troubleshooting
- **'g++' not found**: Install Xcode command line tools (macOS) or `build-essential` (Linux), or MinGW (Windows).
- **Weird characters on Windows**: Use PowerShell or `cmd` and run the `.exe` you built.
