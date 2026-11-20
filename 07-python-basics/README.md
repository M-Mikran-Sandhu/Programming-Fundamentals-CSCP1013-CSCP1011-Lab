# 15 - Python basics

## What it does
Asks for a name and marks (0 to 100), then prints the grade (A to F) and Pass or Fail. Rejects marks that are not a whole number from 0 to 100.

## Concepts used
- `input()` and `print()`
- Converting text to a number with `int()`
- Checking text with `isdecimal()` and `.strip()`
- `if` / `elif` / `else` and indentation

## Sample run
```
Enter your name: Ali
Enter your marks (0 to 100): 85

Name  : Ali
Marks : 85
Grade : A
Result: Pass
```

Invalid input:
```
Enter your name: Ali
Enter your marks (0 to 100): abc
Invalid input. Enter a whole number from 0 to 100.
```

## What I learned
In Python I don’t declare types or use braces. input() always returns text, so I check it with isdecimal() and convert it with int(), and indentation marks each block.