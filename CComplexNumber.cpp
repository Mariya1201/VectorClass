#include "Header.h"


// �������� ����������� ����� /���������� +/
CComplexNumber CComplexNumber::operator+(const CComplexNumber& vect) {
    return CComplexNumber(Re + vect.Re, Im + vect.Im);
}

// ��������� ����������� ����� /���������� -/
CComplexNumber CComplexNumber::operator-(const CComplexNumber& vect) {
    return CComplexNumber(Re - vect.Re, Im - vect.Im);
}


// ��������� ����������� ����� /���������� */
CComplexNumber CComplexNumber::operator*(const CComplexNumber& z1) {
    return CComplexNumber((Re * z1.Re - Im * z1.Im), (Re * z1.Im + Im * z1.Re));
}

// ������� ����������� ����� /���������� //
CComplexNumber CComplexNumber::operator/(const  CComplexNumber& z) {
    return CComplexNumber((Re * z.Re + Im * z.Im) / (z.Re * z.Re + z.Im * z.Im), (Im * z.Re - Re * z.Im) / (z.Re * z.Re + z.Im * z.Im));
}




// ����� ����������� ����� /���������� <</
ostream& operator<< (ostream& fo, const CComplexNumber& vect) {
    //fo << "( " << vect.Re <<" : ";
    //fo << vect.Im << " )\n";
  if (vect.Im < 0) fo <<"   " << vect.Re << "+(" << vect.Im << ")i\n";
  else fo << "   " << vect.Re << "+" << vect.Im << "i\n";
    return fo;
}

// ���� ����������� ����� /���������� >>/
istream& operator>>(istream& fi, CComplexNumber& vect) {
    fi >> vect.Re;
    fi >> vect.Im;

    return fi;
}