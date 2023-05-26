#ifndef PROGA_LAB2_LAB2_H
#define PROGA_LAB2_LAB2_H
#include "iostream"

using namespace std;
namespace Servis{

void open(string fileName);

void close(string fileName);

bool chek(string fileName);

void fileNameOut(string fileName);

void addStr(string name, string str);

void addNum(string name, int num);

void addRnum(string name, float r_num);

void fileOut(string name, string str, int num, float r_num);

}
#endif
