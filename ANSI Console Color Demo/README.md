
# ANSI Console Color Demo

A tiny C++ program that demonstrates how to print colored text in the terminal using ANSI escape codes.

## Program Title
**ANSI Console Color Demo**  
Suggested folder & program name: `ansi-console-color-demo` (source file: `ansiColorTextDemo.cpp`).

## What it does
Prints four lines of text (Black, Red, Green, Yellow) using ANSI escape codes. You can add more colors by changing the numeric code in the `\x1b[<code>m` sequence.

## Requirements
- A C++ compiler (any of: `g++`, `clang++`, or MSVC).
- A terminal that supports ANSI escape codes:
  - **macOS / Linux:** Terminal apps support ANSI by default.
  - **Windows 10+ (build 1511 or later):** Use Windows Terminal, PowerShell, or Command Prompt with *Virtual Terminal Processing* enabled (usually on by default in modern builds).

## Build & Run

### macOS / Linux
```bash
g++ -std=c++11 -O2 -o ansi-color-demo ansiColorTextDemo.cpp
./ansi-color-demo
```

### Windows (MSYS2/MinGW or WSL)
```bash
g++ -std=c++11 -O2 -o ansi-color-demo.exe ansiColorTextDemo.cpp
ansi-color-demo.exe
```

### Windows (MSVC)
```bat
cl /EHsc /O2 ansiColorTextDemo.cpp /Fe:ansi-color-demo.exe
ansi-color-demo.exe
```

## Expected Output
You'll see lines labeled **Black**, **Red**, **Green**, and **Yellow**; the words themselves will appear in those colors (if your terminal supports ANSI).

Example (colors not shown here):
```
This is Black Text
This is Red Text
This is Green Text
This is Yellow Text
```

## Customize Colors
Change the foreground (text) color by editing the number in `\x1b[<code>m`:

| Color | Code | Example snippet |
|---|---:|---|
| Black | 30 | `cout << "\x1b[30mThis is Black\n";` |
| Red | 31 | `cout << "\x1b[31mThis is Red\n";` |
| Green | 32 | `cout << "\x1b[32mThis is Green\n";` |
| Yellow | 33 | `cout << "\x1b[33mThis is Yellow\n";` |
| Blue | 34 | `cout << "\x1b[34mThis is Blue\n";` |
| Magenta | 35 | `cout << "\x1b[35mThis is Magenta\n";` |
| Cyan | 36 | `cout << "\x1b[36mThis is Cyan\n";` |
| White | 37 | `cout << "\x1b[37mThis is White\n";` |

Tip: Reset color with `\x1b[0m` when you're done:
```cpp
cout << "\x1b[31mRed\x1b[0m default again\n";
```

## Windows notes
- If colors don't appear in **Command Prompt**, try **Windows Terminal** or **PowerShell**.
- On very old Windows builds, ANSI might be disabled. Update Windows or enable *Virtual Terminal Processing* in the console mode.

## Troubleshooting
- **No colors / weird `^[` characters show up:** Your terminal doesn't interpret ANSI sequences. Switch terminals or enable ANSI support.
- **Mixed colors after program exits:** Make sure to append `\x1b[0m` (reset) at the end of any colored output.

---

For the full list of ANSI color options, see the Wikipedia page for **ANSI escape codes → Colors**.
