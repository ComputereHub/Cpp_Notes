#include <iostream>
using namespace std;

class A { public: void show(){ cout<<"Parent"; }};
class B : public A {};
class C : public A {};

int main() {
    B b; C c;
    b.show(); cout<<endl;
    c.show();
}
