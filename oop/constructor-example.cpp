#include <iostream>
using namespace std;

class Demo {
public:
    int value;

    Demo(int v) {
        value = v;
        cout << "Constructor Called, Value = " << value << endl;
    }
};

int main() {
    int v;
    cin >> v;

    Demo obj(v);
    return 0;
}
