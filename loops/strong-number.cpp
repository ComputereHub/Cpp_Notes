#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int main() {
    int n=145,sum=0,temp=n;
    while(temp>0){
        sum+=fact(temp%10);
        temp/=10;
    }
    if(sum==n) cout<<"Strong Number";
    else cout<<"Not Strong";
    return 0;
}
