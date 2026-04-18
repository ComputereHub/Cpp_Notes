#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    int num = 145;
    int sum = 0;
    int digit;

    while(num > 0) {
        digit = num % 10;           // last digit निकाला
        sum = sum + factorial(digit);
        num = num / 10;             // next digit के लिए
    }

    if(sum == 145)
        cout << "Strong Number";
    else
        cout << "Not Strong";

    return 0;
}
