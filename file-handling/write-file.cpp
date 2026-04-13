#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");

    file << "Hello, this is file writing example";

    file.close();

    cout << "Data Written to File";
    return 0;
}
