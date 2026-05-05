#include <iostream>
using namespace std;

class A{
public:
    class B{
    public:
        void show(){
            cout<<"Nested Class";
        }
    };
};

int main(){
    A::B obj;
    obj.show();
}
