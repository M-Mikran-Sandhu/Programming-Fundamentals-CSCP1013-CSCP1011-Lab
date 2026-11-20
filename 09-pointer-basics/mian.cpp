#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks (0 to 100): ";
    cin >> marks;

    
    if (cin.fail() || marks < 0 || marks > 100) {
        cout << "Invalid input. Enter a whole number from 0 to 100." << endl;
        return 1;
    }

    int* ptr = &marks;              

    cout << endl;
    cout << "Value of marks       : " << marks << endl;
    cout << "Address of marks     : " << &marks << endl;
    cout << "Value stored in ptr  : " << ptr << endl;
    cout << "Value ptr points to  : " << *ptr << endl;

   
    *ptr = *ptr + 5;
    if (*ptr > 100) {
        *ptr = 100;
    }
    cout << endl;
    cout << "After grace marks, marks = " << marks << endl;

    
    int* empty = nullptr;
    if (empty == nullptr) {
        cout << "empty is nullptr, so it must not be used with *." << endl;
    }

    return 0;
}