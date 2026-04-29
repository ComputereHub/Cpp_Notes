#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int temp = n, sum = 0;

    while(n > 0){
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }

    return sum == temp;
}

int main(){
    if(isArmstrong(153))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
}
