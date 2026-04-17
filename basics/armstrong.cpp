#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;
    cout << "Enter number: ";
    cin >> n;

    temp = n;

    while(temp > 0) {
        int d = temp % 10;
        sum += d*d*d;
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";

    return 0;
}
