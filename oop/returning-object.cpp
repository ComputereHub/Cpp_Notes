#include <iostream>
using namespace std;

class Demo{
public:
    int x;
};

Demo get(){
    Demo d;
    d.x=10;
    return d;
}

int main(){
    Demo d = get();
    cout<<d.x;
}
