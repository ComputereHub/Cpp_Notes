#include <iostream>
using namespace std;

class Demo {
public:
    int x;
};

int main(){
    Demo d;
    Demo *p=&d;
    p->x=10;
    cout<<p->x;
}
