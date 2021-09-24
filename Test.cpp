#include"Header.h"

int autotest1() {
    CComplexNumber arr1[N], arr2[N];

    for (int i = 0; i < N; i++) {
        arr1[i] = CComplexNumber(1, 1);
        arr2[i] = CComplexNumber(2,2);
    }
    int e=1;
    CComplexVector a(arr1), b(arr2);
    CComplexVector arr= a + b;
    for (int i = 0; i < N; i++) {
        if (arr.arr[i].Re == 3 && arr.arr[i].Im == 3) {
            e = 0;
        }
    }

    /*if (arr.getX() == 1.0 && arr.getY() == 2.0) {
        return 0;
    }*/
       if (e == 0) {
           return 0;
       }
       else{
           return 2;
       }
}

int autotest2()
{
    CComplexNumber arr1[N], arr2[N];

    for (int i = 0; i < N; i++) {
        arr1[i] = CComplexNumber(1, 1);
        arr2[i] = CComplexNumber(2, 2);
    }
    int e = 1;
    CComplexVector a(arr1), b(arr2);
    CComplexVector arr = b - a;
    for (int i = 0; i < N; i++) {
        if (arr.arr[i].Re == 1 && arr.arr[i].Im == 1) {
            e = 0;
        }
    }
    if (e == 0) {
        return 0;
    }
    else {
        return 2;
    }
}

int autotest3()
{
    CComplexNumber arr1[N], arr2[N];

    for (int i = 0; i < N; i++) {
        arr1[i] = CComplexNumber(1, 1);
        arr2[i] = CComplexNumber(2, 2);
    }
    int e = 1;
    CComplexVector a(arr1), b(arr2);
    CComplexVector arr = a * b;
    for (int i = 0; i < N; i++) {
        if (arr.arr[i].Re == 0 && arr.arr[i].Im == 4) {
            e = 0;
        }
    }
    if (e == 0) {
        return 0;
    }
    else {
        return 2;
    }
    return 0;
}

int autotest() {

    if (autotest1() == 0 && autotest2() == 0 && autotest3() == 0) {
        printf("autotests passed\n");
        return 0;
    }
    else
    {
        printf("autotests is not passed\n");
        return 1;
    }
}
