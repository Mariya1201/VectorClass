#pragma once
#ifndef CCOMPLEXNUMBER_H
#define CCOMPLEXNUMBER_H


class CComplexNumber {
public:
    double Re;
    double Im;

public:
    CComplexNumber(double r = 0, double i = 0) { // �����������
        Re = r;
        Im = i;
    }

    CComplexNumber operator+(const CComplexNumber&); // �������� ����������� �����
    CComplexNumber operator-(const CComplexNumber&); // ��������� ����������� �����

    CComplexNumber operator*(const CComplexNumber&); // ��������� ����������� �����
    CComplexNumber operator/(const CComplexNumber&); // ������� ����������� �����

    friend ostream& operator<<(ostream&, const CComplexNumber&); // ����� ����������� �����
    friend istream& operator>>(istream&, CComplexNumber&); // ���� ����������� �����
};

#endif