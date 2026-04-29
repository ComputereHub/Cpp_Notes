#include <iostream>
using namespace std;

int main() {
    string s = "h e l l o";

    for(char ch : s){
        if(ch!=' ')
            cout << ch;
    }
}
