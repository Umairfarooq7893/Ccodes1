/*
    Name    : Umair Farooq
    Program : Basic structure of c programme
*/

#include <stdio.h>   // Preprocessor directive
#include <math.h>    // Another library example (optional)

// Constant Definitions
#define PI 3.14159    // Macro constant
const int MAX = 100;  // Constant variable

// Global Variable Declaration
int globalVar = 50;

// Function Declarations (Prototypes)
void greet();                     // Function with no return
int add(int a, int b);            // Function returning int

int main() {
    // Local Variable Declarations
    int num1, num2;


    // Statements / Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function Calls
    greet();
    int sum = add(num1, num2);

    // Output
    printf("Sum = %d\n", sum);
    printf("Global Variable = %d\n", globalVar);
    printf("Macro Constant PI = %.2f\n", PI);
    printf("Constant Variable MAX = %d\n", MAX);

    return 0;  // Exit code
}

// Function Definitions

// Function with no return value
void greet() {
    printf("Hello! Welcome to C programming.\n");
}

// Function returning int
int add(int a, int b) {
    return a + b;
}
