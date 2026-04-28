#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2,1,-3,4,-1,2,1,-5};
    int max = arr[0];

    for(int i=0;i<8;i++){
        int sum = 0;
        for(int j=i;j<8;j++){
            sum = sum + arr[j];

            if(sum > max)
                max = sum;
        }
    }

    cout << "Maximum Sum = " << max;
}
