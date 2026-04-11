#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, temp;

    cout << "Before Swap: a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "After Swap: a = " << a << ", b = " << b;

    return 0;
}
