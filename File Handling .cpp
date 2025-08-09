#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    outFile << "Hello, this is C++ file handling!\n";
    outFile.close();

    ifstream inFile("data.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();
    return 0;
}
