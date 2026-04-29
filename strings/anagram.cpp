#include <iostream>
using namespace std;

int main() {
    string a = "listen", b = "silent";
    int match = 0;

    for(int i=0;i<a.length();i++){
        for(int j=0;j<b.length();j++){
            if(a[i]==b[j]){
                match++;
                break;
            }
        }
    }

    if(match == a.length())
        cout << "Yes";
    else
        cout << "No";
}
