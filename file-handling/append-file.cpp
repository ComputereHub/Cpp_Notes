#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt", ios::app);

    file << "\nThis is appended text";

    file.close();

    cout << "Data Appended Successfully";
    return 0;
}
