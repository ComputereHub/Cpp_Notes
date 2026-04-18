#include <iostream>
using namespace std;

int main() {
    int num = 123;
    int sum = 0;

    while(num != 0) {
        sum = sum + (num % 10);  // last digit add किया
        num = num / 10;          // digit हटाया
    }

    cout << "Sum = " << sum;

    return 0;
}
