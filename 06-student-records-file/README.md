# 14 - Student records file

## What it does
A menu program that keeps student records in `records.txt`. You can add a student, view all students, and search for a student by name. Records stay in the file after the program closes.

## Concepts used
- Writing to a file in append mode with `ios::app`
- Reading a file with `ifstream` and a `while` loop
- Functions that work on a file
- A menu with `while` and `switch`
- Input validation

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
Name to search: Ali
Ali has 78 marks.

Choose (1 to 4): 4
Goodbye.
```

## What I learned
I opened the file with ios::app so new records are added at the end without erasing the old ones, and I read it back with ifstream to view or search the records.