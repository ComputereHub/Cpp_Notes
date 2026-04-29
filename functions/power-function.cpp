#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i = 0; i < b; i++){
        ans *= a;
    }
    return ans;
}

int main(){
    cout << power(2, 3);
}
