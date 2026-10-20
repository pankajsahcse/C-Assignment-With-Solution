
#include <iostream>
using namespace std;

// Function declaration
void swapNums(int *, int *);

int main() {
    int x = 10, y = 20;

    cout << "Before function call:" << endl;
    cout << "x = " << x <<endl;
    cout<< " y = " << y << endl;

    swapNums(&x, &y);

    cout << "After function call:" << endl;
    cout << "x = " << x <<endl;
    cout<< "y = " << y << endl;

    return 0;
}

// definition
void swapNums(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

