#include <iostream>
using namespace std;

int main() {
    string s = "hello world";
    int count = 1;

    for(char ch : s){
        if(ch==' ')
            count++;
    }

    cout << count;
}
