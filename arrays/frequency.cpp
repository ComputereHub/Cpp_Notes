#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,3,3};

    for(int i=0;i<6;i++){
        int count = 0;

        for(int j=0;j<6;j++){
            if(arr[i] == arr[j])
                count++;
        }

        cout << arr[i] << " -> " << count << endl;
    }
}
