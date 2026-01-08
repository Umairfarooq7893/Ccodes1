/*  
    Author  : Umair Farooq
    Program : Herons   
*/

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    // Input lengths of the sides
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c)); // sqrt() is a predefined function

    printf("The area of the triangle is: %.2lf\n", area);   // .2f ,the .2 means only upto 2 decimal print

    return 0;
}