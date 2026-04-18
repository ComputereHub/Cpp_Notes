#include <iostream>
using namespace std;

int main() {
    int num = 12345;
    int count = 0;

    while(num != 0) {
        num = num / 10;   // last digit हटाया
        count++;          // count बढ़ाया
    }

    cout << "Total Digits = " << count;

    return 0;
}
