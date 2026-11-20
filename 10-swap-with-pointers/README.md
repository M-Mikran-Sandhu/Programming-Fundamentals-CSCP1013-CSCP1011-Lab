# 10 - Swap with pointers

## What it does
Reads two whole numbers and tries to swap them two ways: with a function that gets copies, and with a function that gets pointers. Only the pointer version really swaps the numbers.

## Concepts used
- Passing pointers to a function
- Passing copies to a function, for comparison
- Address-of `&` and dereference `*`
- Input validation with `cin.fail()`

## Sample run
```
Enter two whole numbers: 10 20

Before            : x = 10, y = 20
After swapCopy    : x = 10, y = 20  (no change)
After swapPointer : x = 20, y = 10  (swapped)
```

## What I learned
A function that gets copies cannot change my variables. If I pass addresses with pointers, it can change the originals, which is how a swap function works.