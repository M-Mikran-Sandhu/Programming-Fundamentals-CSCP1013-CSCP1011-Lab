#include <iostream>
using namespace std;

void swapCopy(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << "Enter two whole numbers: ";
    cin >> x >> y;

    
    if (cin.fail()) {
        cout << "Invalid input. Enter two whole numbers." << endl;
        return 1;
    }

    cout << endl;
    cout << "Before            : x = " << x << ", y = " << y << endl;

    swapCopy(x, y);
    cout << "After swapCopy    : x = " << x << ", y = " << y << "  (no change)" << endl;

    swapPointer(&x, &y);        // & sends the address of each variable
    cout << "After swapPointer : x = " << x << ", y = " << y << "  (swapped)" << endl;

    return 0;
}