#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0, digit, original;

    cout << "Enter number: ";
    cin >> num;

    original = num;

    while(num != 0) {
        digit = num % 10;                 // last digit
        reverse = reverse * 10 + digit;   // reverse बनाना
        num = num / 10;                   // digit हटाना
    }

    if(original == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";

    return 0;
}
