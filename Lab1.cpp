#include "Lab1.h"
using namespace std;
namespace Lab1 {
//4
    void fractionalPart1(double &num) {
        num = trunc(num);
    }

    void fractionalPart2(double *numPtr) {
        *numPtr = trunc(*numPtr);
    }

    void test_fractional_Part() {
        double a = 1.23;
        double aPtr = 1;
        double aLinc = 1;
        fractionalPart1(a);
        fractionalPart2(&a);
        if (a == aPtr and a == aLinc) {
            cout << "Test completed" << endl;
        }
    }

//7
    void changeSign1(double &num) {
        num = -num;
    }

    void changeSign2(double *numPtr) {
        *numPtr = -*numPtr;
    }

    void test_change_sign() {
        double a1 = 1;
        double a2 = 1;
        changeSign1(a1);
        changeSign2(&a2);
        if (a1 == -1 and a2 == -1) {
            cout << "\nTest completed";
        } else {
            cout << "\nTest failed";
        }
    }

//12
    void shiftCircle1(Vector &center, const Vector &vector) {
        center.x += vector.x;
        center.y += vector.y;
    }

    void shiftCircle2(Vector *centerPtr, const Vector *vectorPtr) {
        centerPtr->x += vectorPtr->x;
        centerPtr->y += vectorPtr->y;
    }

    void test_shift() {
        Vector center1 = {1, 1};
        Vector center2 = {1, 1};
        Vector vector1 = {1, 1};
        Vector vector2 = {1, 1};

        shiftCircle1(center1, vector1);
        shiftCircle2(&center2, &vector2);

        if (center1.x == 2 and center1.y == 2) {
            if (center2.x == 2 and center2.y == 2) {
                cout << "\nTest completed";
            } else {
                cout << "\nTest failed";
            }
        } else {
            cout << "\nTest failed";
        }
    }

//15
    void multiplyMatrix1(double *a[], double scalar) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j] *= scalar;
            }
        }
    }
    void test_matrix(){
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
        if(matr[0][0]==4 and matr[0][1]==8 and matr[0][2]==12
        and matr[1][0]==4 and matr[1][1]==8 and matr[1][2]==12
        and matr[2][0]==4 and matr[2][1]==8 and matr[2][2]==12){
            cout << "\nTest completed" << endl;
        } else{
            cout << "\nTest failed"<< endl;
        }
    }
}
