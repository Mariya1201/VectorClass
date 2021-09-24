#include "Header.h"


/*CComplexVector::getX() {
    double x = 0;
    for (int i = 0; i < N; i++) {
        x += arr[i].Re;
    }
    return x;
}

double CComplexVector::getY() {
    double y = 0;
    for (int i = 0; i < N; i++) {
        y += arr[i].Im;
    }
    return y;
}*/

CComplexVector CComplexVector::operator+(const CComplexVector& vect) {
    CComplexNumber newArr[N];
    for (int i = 0; i < N; i++) {
        newArr[i] = arr[i] + vect.arr[i];
    }
    return CComplexVector(newArr);
}

CComplexVector CComplexVector::operator-(const CComplexVector& vect) {
    CComplexNumber newArr[N];
    for (int i = 0; i < N; i++) {
        newArr[i] = arr[i] - vect.arr[i];
    }
    return CComplexVector(newArr);
}

CComplexVector CComplexVector::operator*(const CComplexVector& vect) {
    CComplexNumber newArr[N];
    for (int i = 0; i < N; i++) {
        newArr[i] = arr[i] * vect.arr[i];
    }
    return CComplexVector(newArr);
}


ostream& operator<< (ostream& fo, const CComplexVector& vect) {
   // double x = 0, y = 0;
    CComplexNumber newArr[N];
    for (int i =0; i < N; i++) {
        fo << vect.arr[i]
            ;
    }


    return fo;
}