/*  
    Author  : Umair Farooq
    Program : greatest common divisor using Euclidean algorithm
*/
#include <stdio.h>
 
int main() {
    int num1, num2, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using Euclidean algorithm
    for (int i = 1; i <= num1 && i <= num2; i++) { 
/* 
    i should be less than or equal to both numbers
    and it cannot be greater than either number
*/
        if (num1 % i == 0 && num2 % i == 0) // && means at a time both are zero with that i
            gcd = i;
    }
    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}

