#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout<<"Base";
    }
};

class B:public A{
public:
    void show(){
        cout<<"Derived";
    }
};

int main(){
    A* a;
    B b;
    a=&b;
    a->show();
}
