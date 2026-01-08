/*
    Author  : Umair Farooq
    Program : Even Odd using conditional operator

*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    // Using conditional (ternary) operator
    // condition ? statement_if_true : statement_if_false
    (num % 2 != 0) ? printf("The number is odd") : printf("The number is even");

    return 0;
}
