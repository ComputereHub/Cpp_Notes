#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int flag = 1;

    for(int i=0;i<4;i++){
        if(arr[i] > arr[i+1]){
            flag = 0;
        }
    }

    if(flag==1)
        cout << "Sorted";
    else
        cout << "Not Sorted";
}
