#include <iostream>
using namespace std;
int main() {
    int n=153,sum=0,temp=n;
    while(temp>0){
        int d=temp%10;
        sum+=d*d*d;
        temp/=10;
    }
    if(sum==n) cout<<"Armstrong Number";
    else cout<<"Not Armstrong";
    return 0;
}
