#pragma once
#ifndef CCOMPLEXVECTOR_H
#define CCOMPLEXVECTOR_H


class CComplexVector {
public:
    CComplexNumber arr[N];
    CComplexVector(CComplexNumber* numbers) { // Конструктор
        for (int i = 0; i < N; i++) {
            arr[i] = numbers[i];
        }
    }

    //double getX();
    //double getY();

    CComplexVector operator+(const CComplexVector&);
    CComplexVector operator-(const CComplexVector&);

    CComplexVector operator*(const CComplexVector&);

    friend ostream& operator<<(ostream&, const CComplexVector&);
    friend istream& operator>>(istream&, CComplexVector&);
};

#endif