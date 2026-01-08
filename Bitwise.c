// Bitwise Operators in C
#include <stdio.h>

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    // Using bitwise operators
    printf("a & b: %d\n", a & b); // 1
/*   0101
     0011
     ----
     0001  → 1*/
    printf("a | b: %d\n", a | b); // 7
/*   0101
     0011
     ----
     0111  → 7*/    
    printf("a ^ b: %d\n", a ^ b); // 6
/*XOR compares two bits:

It gives 1 if the bits are different,
It gives 0 if the bits are the same.
    0101
    0011
    ----
    0110  → 6*/
    printf("~a: %d\n", ~a);       // -6
/* 
Flips every bit (inverts 0 ↔ 1)
    0101
    ----
    1010  → -6
    */
    printf("a << 1: %d\n", a << 1); // 10
/*Shifts bits to the left, adding 0 on the right
    0101
    ----
    1010  → 10
*/
    printf("a >> 1: %d\n", a >> 1); // 2
/*Shifts bits to the right, removing bits on the right
    0101
    ----
    0010  → 2
*/    
    return 0;
}