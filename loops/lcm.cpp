#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 18;
    int lcm;

    // बड़े नंबर से शुरू करें
    lcm = (a > b) ? a : b;

    while(lcm % a != 0 || lcm % b != 0) {
        lcm++;   // अगला नंबर check करें
    }

    cout << "LCM = " << lcm;

    return 0;
}
