#include <iostream>
using namespace std;

int maxNum(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    cout << "Max = " << maxNum(10, 25);
}
