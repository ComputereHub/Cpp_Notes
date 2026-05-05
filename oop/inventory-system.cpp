#include <iostream>
using namespace std;

class Product{
public:
    int price;
};

int main(){
    Product p;
    p.price=100;
    cout<<p.price;
}
