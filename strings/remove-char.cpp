#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    for(char ch : s){
        if(ch!='l')
            cout << ch;
    }
}
