#include <iostream>
using namespace std;

int main() {
    int a[] = {1,2,3};
    int b[3];

    for(int i=0;i<3;i++){
        b[i] = a[i];
    }

    for(int i=0;i<3;i++){
        cout << b[i] << " ";
    }
}
