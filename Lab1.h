#pragma once
#include <cmath>
#include <iostream>

namespace Lab1 {
//4
    void fractionalPart1(double& num);
    void fractionalPart2(double* numPtr);
    void test_fractional_Part();
//7
    void changeSign1(double& num);
    void changeSign2(double* numPtr);
    void test_change_sign();
//12
    struct Vector {
        double x;
        double y;
    };

    void shiftCircle1(Vector& center, const Vector& vector);
    void shiftCircle2(Vector* centerPtr, const Vector* vectorPtr);
    void test_shift();
//15
    struct Matrix3x3 {
        double values[3][3];
    };

    void multiplyMatrix1(double *a[], double scalar);
    void test_matrix();

}
