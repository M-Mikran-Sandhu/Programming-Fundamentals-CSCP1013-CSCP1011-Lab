# 09 - Pointer basics

## What it does
Reads marks from the user, shows the marks together with their memory address, adds 5 grace marks (maximum 100) through a pointer, and shows a null pointer.

## Concepts used
- `int* ptr`, address-of `&`, dereference `*`
- Changing a variable through a pointer
- `nullptr`
- Input validation with `cin.fail()`

## Sample run
```
Enter your marks (0 to 100): 85

Value of marks       : 85
Address of marks     : 0x7ffed6237994
Value stored in ptr  : 0x7ffed6237994
Value ptr points to  : 85

After grace marks, marks = 90
empty is nullptr, so it must not be used with *.
```
The address is different on every run.

## What I learned
A new funtion with cin as cin.fail . Pointer are used in programming to save space, Avoid unwanted copy of data and work with arrays and memory created while the program runs