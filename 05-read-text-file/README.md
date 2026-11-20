# 13 - Read from a text file

## What it does
Reads student names and marks from a text file (such as the `students.txt` written by program 12), prints them as a table, and shows the number of students, the total, the average and the topper.

## Concepts used
- `ifstream` and `#include <fstream>`
- Checking that the file opened with `is_open()`
- Reading until the end of the file with `while (inFile >> name >> marks)`
- Detecting a bad line with `eof()`
- Table output with `setw`, `left`, `fixed` and `setprecision`

## Sample run
`students.txt` contains:
```
Ali 78
Sara 92
Hamza 85
```

Output:
```
Enter file name (for example students.txt): students.txt

Name        Marks
-----------------
Ali         78
Sara        92
Hamza       85

Students : 3
Total    : 255
Average  : 85.00
Topper   : Sara (92)
```

## What I learned
ifstream opens a file for reading, and while (inFile >> a >> b) reads until the file ends or a line is bad. I check is_open() first and use eof() afterwards to catch bad data. left to put the text on the left side of its space. setw(12) give the next thing space of 12 characters wide 