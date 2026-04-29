#include <iostream>
using namespace std;

int main() {
    string s = "hello";

    for(int i=0;i<s.length();i++){
        int count = 0;
        for(int j=0;j<s.length();j++){
            if(s[i]==s[j])
                count++;
        }
        cout << s[i] << ":" << count << endl;
    }
}
