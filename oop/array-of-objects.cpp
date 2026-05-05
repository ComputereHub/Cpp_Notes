#include <iostream>
using namespace std;

class Demo {
public:
    int x;
};

int main(){
    Demo d[2];
    d[0].x=10;
    d[1].x=20;
    cout<<d[0].x<<" "<<d[1].x;
}
