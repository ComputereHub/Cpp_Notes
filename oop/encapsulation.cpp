#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Demo obj;
    int v;
    cin >> v;

    obj.setValue(v);

    cout << "Value = " << obj.getValue();
    return 0;
}
