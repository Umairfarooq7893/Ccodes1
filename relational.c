#include <stdio.h>
int main() {
// Relational Operators in C

// True or False 
    /*if statement is true compiler returns 1
    if statement is false compiler returns 0*/

    printf("%d \n", 4==3);     // false
    printf("%d \n", 4!=4);     // false
    printf("%d \n", 4==4);     // true
    printf("%d \n", 4>3);      // true
    printf("%d \n", 4<3);      // false
    printf("%d \n", 4>=3);     // true
    printf("%d \n", 4<=3);     // false
    printf("%d \n", 4>=4);     // true
    
int a = 5, b = 10;

//Equal to
    if (a == b) {
        printf("a is equal to b\n");
    }   // a = b, value of b is asigned to a
        // a==b , means a is equal to b , also b is equal to a


//Not equal to
    if (a != b) {
        printf("a is not equal to b\n");
    }
//Greater than
    if (a > b) {
        printf("a is greater than b\n");
    }
//Less than
    if (a < b) {
        printf("a is less than b\n");
    }
//Greater than or equal to
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    }
//Less than or equal to
    if (a <= b) {
        printf("a is less than or equal to b\n");
    }
    return 0;
}