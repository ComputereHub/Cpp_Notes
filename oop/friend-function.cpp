#include <iostream>
using namespace std;

class Demo {
private:
    int x;
public:
    Demo(int a){ x = a; }
    friend void show(Demo d);
};

void show(Demo d){
    cout << d.x;
}

int main() {
    Demo d(5);
    show(d);
}
