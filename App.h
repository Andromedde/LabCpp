#ifndef LABCPP_APP_H
#define LABCPP_APP_H
#include "iostream"
#include "Lab1.h"

using namespace Lab1;
using namespace std;
class App{
public:
    void Start(){
        cout << "...............4.............\n";
        double num1;
        cin >> num1;
        fractionalPart1(num1);
        cout << num1 << endl;
        test_fractional_Part();
        cout << "\n...............7.............\n";
        double num2;
        cin >> num2;
        changeSign1(num2);
        cout << num2 << endl; //
        test_change_sign();
        cout << "\n...............12.............\n" << endl;
        Vector center1;
        cin >> center1.x >> center1.y;
        Vector vector1;
        cin >> vector1.x >> vector1.y;
        shiftCircle1(center1, vector1);
        cout << center1.x << ", " << center1.y << endl;
        test_shift();

        cout << "\n...............15.............\n";

        double a_a_1[3][3];
        cout << "Enter matrix :\n";
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> a_a_1[i][j];
            }
        }
        double *a_1[3];
        for (int i = 0; i < 3; i++){
            a_1[i] = a_a_1[i];
        }

        double num;
        cout << "Enter number:";
        cin >> num;
        multiplyMatrix1(a_1, num);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << a_1[i][j] << ' ';
            }
            cout << endl;

        }
        double matrix[3][3];
        double k=0;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                k+=1;
                matrix[i][j]=k;
            }
            k=0;
        }
        double *matr[3];
        for (int i = 0; i < 3; i++){
            matr[i] = matrix[i];
        }

        double n=4;
        multiplyMatrix1(matr, n);
        test_matrix();
    }
};
#endif //LABCPP_APP_H
