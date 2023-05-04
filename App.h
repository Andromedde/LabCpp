#ifndef PROGA_LAB3_APP_H
#define PROGA_LAB3_APP_H

#include <iostream>
#include "Vector.h"
#include "Square.h"
#include "Array.h"

using namespace std;

class App {
public:
    void Start() {
        {
            //2
            cout << "...........2................\n";
            Square s1(0, 0, 5, 0);
            Square s2(0, 0, 7, 45);
            cout << boolalpha;
            cout << (s1 == s2) << endl;
            cout << (s1 != s2) << endl;
            cout << (s1 < s2) << endl;
            cout << (s1 > s2) << endl;

            s1.increaseSide(2);
            cout << s1.getSide() << endl;

            Vector v(5, 5);
            s2.moveByVector(v);
            cout << s2.getX() << ", " << s2.getY() << endl;
            bool n1=(s1 == s2);bool n2=(s1 != s2); bool n3=(s1 < s2); bool n4=(s1 > s2);
            if(n1==0 and n2==1 and n3==0 and n4==1 and s1.getSide()==10 and s2.getX()==5 and s2.getY()==5){
                cout << "\nTest completed" << endl;
            } else{
                cout << "\nTest failed" << endl;
            }

            //6
            cout << ".............6.............\n";
            Array a1, a2, a3;
            a1.add(1);
            a1.add(2);
            a1.add(3);
            a2.add(4);
            a2.add(5);
            a3 = a1 + a2;
            cout << (a1 == a2) << endl;
            cout << (a1 != a2) << endl;
            cout << (a1 < a2) << endl;
            cout << (a1 > a2) << endl;
            cout << (a1 == a3) << endl;
            cout << (a1 != a3) << endl;
            cout << (a1 < a3) << endl;
            cout << (a1 > a3) << endl;
            if((a1 == a2)==0 and (a1 != a2)==1 and (a1 < a2)==0 and (a1 > a2)==1
            and (a1 == a3)==0 and (a1 != a3)==1 and (a1 < a3)==1 and (a1 > a3)==0){
                cout << "\nTest completed" << endl;
            } else{
                cout << "\nTest failed" << endl;
            }
        }
    }
};
#endif //PROGA_LAB3_APP_H
