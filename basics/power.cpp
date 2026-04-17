#include <iostream>
using namespace std;

int main() {
    int base, power, result = 1;
    cout << "Enter base and power: ";
    cin >> base >> power;

    for(int i = 1; i <= power; i++) {
        result *= base;
    }

    cout << result;

    return 0;
}
