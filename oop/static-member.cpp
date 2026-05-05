#include <iostream>
using namespace std;

class Demo {
public:
    static int x;
};

int Demo::x = 0;

int main() {
    Demo::x = 10;
    cout << Demo::x;
}
