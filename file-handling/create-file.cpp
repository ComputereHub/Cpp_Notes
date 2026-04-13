#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file.close();

    cout << "File Created Successfully";
    return 0;
}
