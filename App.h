#ifndef PROGA_LAB2_APP_H
#define PROGA_LAB2_APP_H
#include "Lab2.h"
#include <iostream>
#include <string>

using namespace std;
namespace Servis {

    class App {
    public:
        void Start() {
            string str = "This is a test string!";
            int num = 12345;
            float r_num = 3.14159;
            string fileName = "test.txt";

            open(fileName);
            if (chek(fileName)) {
                cout << "File is open\n" << endl;
            } else {
                cout << "File is close\n" << endl;
            }

            addStr(fileName, str);
            addNum(fileName, num);
            addRnum(fileName, r_num);

            fileNameOut(fileName);
            fileOut(fileName, str, num, r_num);
            close(fileName);
            if (chek(fileName)) {
                cout << "\nFile is open" << endl;
            } else {
                cout << "\nFile is close" << endl;
            }
        }
    };
}
#endif //PROGA_LAB2_APP_H
