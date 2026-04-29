#include <iostream>
using namespace std;

int main() {
    string s = "programming";

    for(int i=0;i<s.length();i++){
        bool repeat = false;

        for(int j=0;j<i;j++){
            if(s[i]==s[j])
                repeat = true;
        }

        if(!repeat)
            cout << s[i];
    }
}
