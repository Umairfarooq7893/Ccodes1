/*  Author  : Umair Farooq
    Program : Three methods of swapping */
#include<stdio.h>

int main() {

    // (a) Using arithmetic (no third variable)
    int a = 3, b = 5;
    printf("(a) Original values: a = %d, b = %d\n", a, b);
    a = a + b; // 3+5=8
    b = a - b; // 8-5=3
    a = a - b; // 8-3=5
    printf("After swapping using arithmetic: a = %d, b = %d\n\n", a, b);

    // (b) Using third variable
    int m = 4, n = 6;
    printf("(b) Original values: m = %d, n = %d\n", m, n);

    int temp2;
    temp2 = m;
    m = n;
    n = temp2;

    printf("After swapping using third variable: m = %d, n = %d\n\n", m, n);

    // (c) Using pointers
    int p = 8, q = 2;
    printf("(c) Original values: p = %d, q = %d\n", p, q);
    int *ptr1 = &p;
    int *ptr2 = &q;
    int temp1;
    temp1 = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp1;
    printf("After swapping using pointers: p = %d, q = %d\n\n", p, q);

    return 0;
}
