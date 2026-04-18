#include <iostream>
using namespace std;

int main() {
    int num = 153;
    int sum = 0;
    int digit;

    while(num > 0) {
        digit = num % 10;        // last digit निकाला
        sum = sum + digit*digit*digit;
        num = num / 10;          // next digit के लिए
    }

    if(sum == 153)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}
