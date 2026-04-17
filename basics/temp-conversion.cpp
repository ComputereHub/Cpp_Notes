#include <iostream>
using namespace std;

int main() {
    float c;
    cout << "Enter Celsius: ";
    cin >> c;

    float f = (c * 9/5) + 32;
    cout << "Fahrenheit = " << f;

    return 0;
}
