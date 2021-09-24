#include "Header.h"


int main()
{

    if (autotest() == 0) {
        CComplexNumber arr1[N], arr2[N];
        double x, y;

        cout << "\nEnter the first vector:" << endl;
        for (int i = 0; i < N; i++) {
            cout << " Enter X" << (i+1) << ":\n";
            cout << "   Enter Re: ";
            cin >> x;
            cout << "   Enter Im: ";
            cin >> y;
            arr1[i] = CComplexNumber(x, y);;
        }
        cout << "\n\nEnter the second vector:" << endl;
        for (int i = 0; i < N; i++) {
            cout << " Enter Y" << (i + 1) << ":\n";
            cout << "   Enter Re: ";
            cin >> x;
            cout << "   Enter Im: ";
            cin >> y;
            arr2[i] = CComplexNumber(x, y);;
        }

        CComplexVector a(arr1), b(arr2);

        cout << "\n\n";

        CComplexVector sum = a + b;

        cout << " X + Y = " <<"\n" << (a + b);
        cout << " Y - X = " << "\n" << (b - a);
        cout << " X * Y = " << "\n" << (a * b);

        return 0;

    }
    else {
        return 1;
    }


}