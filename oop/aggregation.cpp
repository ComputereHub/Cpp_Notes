#include <iostream>
using namespace std;

class Engine{
public:
    void start(){
        cout<<"Engine Start";
    }
};

class Car{
public:
    Engine e;
};

int main(){
    Car c;
    c.e.start();
}
