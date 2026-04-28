#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int key = 4;

    for(int i=0;i<5;i++){
        if(arr[i] == key){
            cout << "Found at position " << i+1;
        }
    }
}
