// Assignmental Operators in C
#include <stdio.h>
int main() {
    int a = 10; // Simple assignment
    int b = 5;

    // Using compound assignment operators
    a += b; // Equivalent to a = a + b
    printf("After a += b, a = %d\n", a);

    a -= b; // Equivalent to a = a - b
    printf("After a -= b, a = %d\n", a);

    a *= b; // Equivalent to a = a * b
    printf("After a *= b, a = %d\n", a);

    a /= b; // Equivalent to a = a / b
    printf("After a /= b, a = %d\n", a);

    a %= b; // Equivalent to a = a % b
    printf("After a %%= b, a = %d\n", a); // %% is used to print %

    return 0;
}