#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    cout << "Vowels = " << count;
    return 0;
}
