#include <iostream>
using namespace std;
int main() {
    int a=2,b=4,result=1;
    for(int i=1;i<=b;i++){
        result*=a;
    }
    cout<<result;
    return 0;
}
