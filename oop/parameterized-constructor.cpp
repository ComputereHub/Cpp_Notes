#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    Demo(int a) {
        x = a;
        cout << "Value = " << x;
    }
};

int main() {
    Demo d(10);
}
