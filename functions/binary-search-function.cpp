#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0, high = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid + 1;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout << binarySearch(arr, 5, 3);
}
