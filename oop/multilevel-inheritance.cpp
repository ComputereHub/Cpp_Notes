#include <iostream>
using namespace std;

class A { public: void a(){ cout<<"A "; }};
class B : public A { public: void b(){ cout<<"B "; }};
class C : public B {};

int main() {
    C obj;
    obj.a();
    obj.b();
}
