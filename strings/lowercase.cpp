#include <iostream>
using namespace std;

int main() {
    string s = "HELLO";

    for(char &ch : s){
        ch = ch + 32;
    }

    cout << s;
}
