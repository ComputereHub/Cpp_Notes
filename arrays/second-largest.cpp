#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40,50};
    int max = arr[0], second = arr[0];

    for(int i=1;i<5;i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
    }

    cout << "Second Largest = " << second;
}
