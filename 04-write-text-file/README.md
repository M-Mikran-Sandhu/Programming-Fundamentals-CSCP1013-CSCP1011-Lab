# 12 - Write to a text file

## What it does
Asks for the number of students, reads each name and marks, and saves them in `students.txt`, one student per line.

## Concepts used
- `ofstream` and `#include <fstream>`
- Checking that the file opened with `is_open()`
- Writing to a file with `<<`
- Closing a file with `close()`
- Input validation with `cin.fail()`

## Sample run
```
How many students (1 to 10)? 3
Student 1 name (one word): Ali
Student 1 marks (0 to 100): 78
Student 2 name (one word): Sara
Student 2 marks (0 to 100): 92
Student 3 name (one word): Hamza
Student 3 marks (0 to 100): 85

3 student(s) saved in students.txt
```

Contents of `students.txt`:
```
Ali 78
Sara 92
Hamza 85
```

## What I learned
ofstream opens a file for writing, and I write into it with << just like cout. I check is_open() first and call close() at the end