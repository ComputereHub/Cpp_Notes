#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {
public:
    void display() {
        cout << "Child Class Function Called";
    }
};

int main() {
    Child obj;
    obj.show();
    obj.display();
    return 0;
}
