#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    int max = 0;
    char result;

    for(int i=0;i<s.length();i++){
        int count = 0;

        for(int j=0;j<s.length();j++){
            if(s[i]==s[j])
                count++;
        }

        if(count > max){
            max = count;
            result = s[i];
        }
    }

    cout << result;
}
