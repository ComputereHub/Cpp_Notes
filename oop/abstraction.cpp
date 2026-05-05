#include <iostream>
using namespace std;

class Car{
public:
    void start(){
        cout<<"Car Start";
    }
};

int main(){
    Car c;
    c.start();
}
