# 17 - Python functions and files

## What it does
A menu program that keeps student records in `records.txt`. You can add a student, view all students, and search for a student by name (capital letters do not matter). Records stay in the file after the program closes. It is the Python version of program 14.

## Concepts used
- Functions with `def`, `return` and returned lists
- Reading a file with `open(..., "r")` and a `for` loop
- Appending to a file with `open(..., "a")` and `write()`
- `split()`, `strip()`, `lower()` and `ljust()`
- `try` / `except` for file errors
- A menu with `while` and `if` / `elif`

## Sample run
```
1. Add student
2. View all students
3. Search by name
4. Exit
Choose (1 to 4): 1
Name (one word): Ali
Marks (0 to 100): 78
Ali saved.

Choose (1 to 4): 2

Name        Marks
-----------------
Ali         78
Total records: 1

Choose (1 to 4): 3
Name to search: ali
Ali has 78 marks.

Choose (1 to 4): 4
Goodbye.
```

## What I learned
I split the work into functions. One reads the file and returns a list of records, and the others use that list. I open the file with "a" to append, and I use try / except so a file problem prints a message instead of crashing