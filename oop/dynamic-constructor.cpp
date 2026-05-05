#include <iostream>
using namespace std;

class Demo {
public:
    int *p;
    Demo(int x){
        p = new int;
        *p = x;
        cout<<*p;
    }
};

int main(){
    Demo d(10);
}
