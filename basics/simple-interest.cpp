#include <iostream>
using namespace std;

int main() {
    float p, r, t;
    cout << "Enter P, R, T: ";
    cin >> p >> r >> t;

    float si = (p * r * t) / 100;
    cout << "Simple Interest = " << si;

    return 0;
}
