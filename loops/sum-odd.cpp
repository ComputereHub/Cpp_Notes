#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;

    for(int i = 1; i <= n; i += 2) {  // सिर्फ odd numbers
        sum = sum + i;
    }

    cout << "Sum of Odd Numbers = " << sum;

    return 0;
}
