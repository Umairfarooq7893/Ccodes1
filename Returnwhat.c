/*
    Author    : Umair Farooq
    Programme : Defination of 'return'

It tells the operating system that the program ended successfully.

0 = success

                   Place             Meaning
return 0;          in main	         program finished successfully
return 1/other;    in main           some error happened
return value;      in fxn	         send value back
return value;      in void fxn       allowed but no value
return value;      inside loop       ends the whole function

*/
#include <stdio.h>

int main() {
    int a = 5;
    int *p;
    p = &a;

    printf("Value of a = %d\n", a);
    return 0;   // program ends here

    // these lines will not executed
    printf("Pointer p stores address = %p\n", p);
    printf("Value using pointer (*p) = %d\n", *p);

}
