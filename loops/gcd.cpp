#include <iostream>
using namespace std;
int main() {
    int a=12,b=18;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    cout<<"GCD = "<<a;
    return 0;
}
