# 11 - Pointers and arrays

## What it does
Reads the marks of 5 students into an array, then prints them, adds them up and finds the highest mark by moving a pointer through the array.

## Concepts used
- Array name as the address of the first element
- `*(ptr + i)` and `ptr++`
- Arrays with a `const int` size
- Input validation with `cin.fail()`

## Sample run
```
Enter marks of student 1 (0 to 100): 70
Enter marks of student 2 (0 to 100): 85
Enter marks of student 3 (0 to 100): 90
Enter marks of student 4 (0 to 100): 65
Enter marks of student 5 (0 to 100): 80

Marks using *(ptr + i):
Student 1 = 70
Student 2 = 85
Student 3 = 90
Student 4 = 65
Student 5 = 80

Total   : 390
Highest : 90
```

## What I learned
An array name is the address of its first element, so marks[i] and *(marks + i) mean the same thing, and a pointer can walk through the array with ptr++