#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;

    while (n > 0) {
        sum = sum + (n % 10);  // digit जोड़ना
        n = n / 10;            // digit हटाना
    }

    cout << sum;
    return 0;
}
