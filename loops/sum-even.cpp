#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;

    for(int i = 2; i <= n; i += 2) {  // सिर्फ even numbers
        sum = sum + i;
    }

    cout << "Sum of Even Numbers = " << sum;

    return 0;
}
