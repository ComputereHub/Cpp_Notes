#include <iostream>
using namespace std;

class Bank{
public:
    int balance=0;

    void deposit(int x){ balance+=x; }
    void show(){ cout<<balance; }
};

int main(){
    Bank b;
    b.deposit(100);
    b.show();
}
