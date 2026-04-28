#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,5};

    for(int i=1;i<=5;i++){
        int found = 0;

        for(int j=0;j<4;j++){
            if(arr[j] == i)
                found = 1;
        }

        if(found == 0)
            cout << "Missing = " << i;
    }
}
