#include <iostream>
using namespace std;

class Student {
public:
    string name;

    void show() {
        cout << "Name = " << name;
    }
};

int main() {
    Student s;
    cin >> s.name;
    s.show();
    return 0;
}
