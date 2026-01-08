/*  Author  : Umair Farooq
    Program : Quadratic Equation */
#include<stdio.h>
#include<math.h> // for use of sqrt
int main() {
    int a,b,c;
//taking inputs from user
    printf("Enter the Coefficients a,b,c: ");
    scanf("%d%d%d", &a,&b,&c);

//displaying the Equation
    printf("%dx^2+%dx+%d",a,b,c);

//Calculating discriminant
    int D = b*b - 4*a*c;
    printf("\nDiscriminant = %d\n",D);
//now ,using Equation
    if (D < 0){
        printf("Imaginary roots ");
    }else if(D==0){
        float x = -b/(2*a);
    /*since b and a are integers, 
    this does integer division,before converting to float
    cast one operand to float to ensure floating-point division: */
        printf("The Roots are Equal and are %.2f & %.2f",x,x);
    }else{
        float x1 = (-b+sqrt(D))/(2*a);
         /* parenthesis (2a) , to ensure the order of operations
            matches the quadratic formula accurately.*/
        float x2 = (-b-sqrt(D))/(2*a);
        printf("The Roots are %.2f & %.2f\n",x1,x2);
    }
    return 0;
}



