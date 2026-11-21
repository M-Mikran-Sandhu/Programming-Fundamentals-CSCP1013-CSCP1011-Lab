# Programming Fundamentals (CSCP1013 + CSCP1011 Lab), C++ and Python

Programming course at the University of Central Punjab (UCP), Gujranwala. Part of my [Computer Science Journey In UCP](https://github.com/users/M-Mikran-Sandhu/projects/5).

Prerequisite: [Introduction to Computing (CSCS1513 + CSCS1511 Lab)](https://github.com/M-Mikran-Sandhu/Introduction-to-Computing-CSCS1513-CSCS1511-Lab)

> My original coursework was not saved, so these are revision programs I wrote in 2026 to rebuild and document what the course taught. Program numbers continue from the Introduction to Computing repo, which ends at 08.

## Topics

- **Pointers** (C++)
- **File handling** (C++)
- **Introduction to Python**

## Programs

### Pointers (C++)

| # | Program | Topics |
|---|---------|--------|
| 09 | [Pointer basics](09-pointer-basics) | `&`, `*`, `nullptr`, changing a variable through a pointer |
| 10 | [Swap with pointers](10-swap-with-pointers) | passing pointers to functions, pass by copy vs by address |
| 11 | [Pointers and arrays](11-pointers-and-arrays) | array name as a pointer, `*(ptr + i)`, `ptr++` |

### File handling (C++)

| # | Program | Topics |
|---|---------|--------|
| 12 | [Write to a text file](12-write-text-file) | `ofstream`, `is_open()`, `close()` |
| 13 | [Read from a text file](13-read-text-file) | `ifstream`, read loop, `eof()`, `setw` |
| 14 | [Student records file](14-student-records-file) | `ios::app`, functions, menu with `switch` |

### Introduction to Python

| # | Program | Topics |
|---|---------|--------|
| 15 | [Python basics](15-python-basics) | `input()`, `print()`, `int()`, `if` / `elif` / `else` |
| 16 | [Python loops and lists](16-python-loops-and-lists) | `for`, `while`, `break`, lists, `append()` |
| 17 | [Python functions and files](17-python-functions-and-files) | `def`, `return`, `open()` with `"r"` and `"a"`, `split()`, `try` / `except` |

Each program folder has its own `README.md` with what it does, the concepts used, a sample run, and what I learned.

## Run a C++ program

```
cd 09-pointer-basics
g++ main.cpp -o main
./main        # Windows: main.exe
```

## Run a Python program

```
cd 15-python-basics
python main.py        # on some computers: python3 main.py
```

## Notes

- Programs 12, 13, 14 and 17 create or read text files (`students.txt`, `records.txt`) in the folder you run them from. These files are not uploaded to the repo.
- Program 13 asks for a file name. Copy `students.txt` from program 12 into its folder, or type the path `../12-write-text-file/students.txt`.
- Marks are whole numbers from 0 to 100, and names are one word.
