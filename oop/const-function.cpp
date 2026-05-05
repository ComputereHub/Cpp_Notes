#include <iostream>
using namespace std;

class Demo {
public:
    void show() const {
        cout<<"Const Function";
    }
};

int main(){
    Demo d;
    d.show();
}
