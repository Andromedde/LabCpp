#include "iostream"
#include "fstream"
#include "string"

using namespace std;
ofstream file;

void open(string fileName) {
    file.open(fileName);
}

void close(string fileName) {
    file.close();
}

bool chek(string fileName) {
    if (file.is_open())
        return 1;
    else
        return 0;
}

void fileNameOut(string fileName) {
    cout << "Name file: " << fileName << endl;
}

void addStr(string name, string str) {
    if (file.is_open()) {
        file << str << endl;
    }
}

void addNum(string name, int num) {
    if (file.is_open()) {
        file << num << endl;
    }
}

void addRnum(string name, float r_num) {
    if (file.is_open()) {
        file << r_num << endl;
    }
}

void fileOut(string name, string str, int num, float r_num) {
    cout << "Test string: " << str << endl;
    cout << "Test number: " << num << endl;
    cout << "Test real number: " << r_num << endl;
}
