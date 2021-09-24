#pragma once
#ifndef CCOMPLEXNUMBER_H
#define CCOMPLEXNUMBER_H


class CComplexNumber {
public:
    double Re;
    double Im;

public:
    CComplexNumber(double r = 0, double i = 0) { // Конструктор
        Re = r;
        Im = i;
    }

    CComplexNumber operator+(const CComplexNumber&); // Сложение комплексных чисел
    CComplexNumber operator-(const CComplexNumber&); // Вычитание комплексных чисел

    CComplexNumber operator*(const CComplexNumber&); // Умножение комплексных чисел
    CComplexNumber operator/(const CComplexNumber&); // Деление комплексных чисел

    friend ostream& operator<<(ostream&, const CComplexNumber&); // Вывод комплексных чисел
    friend istream& operator>>(istream&, CComplexNumber&); // Ввод комплексных чисел
};

#endif