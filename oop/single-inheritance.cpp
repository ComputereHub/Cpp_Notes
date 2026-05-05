#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Parent";
    }
};

class B : public A {};

int main() {
    B obj;
    obj.show();
}
