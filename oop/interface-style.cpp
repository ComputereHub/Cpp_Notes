#include <iostream>
using namespace std;

class A{
public:
    virtual void show()=0;
    virtual void print()=0;
};

class B:public A{
public:
    void show(){ cout<<"Show "; }
    void print(){ cout<<"Print"; }
};

int main(){
    B b;
    b.show();
    b.print();
}
