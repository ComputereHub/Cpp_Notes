#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string rev = s;

    for(int i = 0; i < s.length()/2; i++) {
        swap(s[i], s[s.length() - i - 1]);
    }

    if(rev == s)
        cout << "Palindrome String";
    else
        cout << "Not Palindrome";

    return 0;
}
