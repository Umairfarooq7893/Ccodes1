#include<stdio.h>
#include<math.h>
int main(){
//  Arithmetic Instructions
    int a,b,c;
    a = 5,b = 10, c = 10;
    /*int u + v = sum , is invalid*/
    int sum = a + b;
    printf("sum of a,b: %d",sum);
    printf("\nsub of a,b: %d",(a-b));
    printf("\nmul of a,b: %d",(a*b));
    printf("\nDiv of a,b: %d",(a/b));
    printf("\nMod of a,b: %d",(a%b));
    printf("\nincrementation of c: %d",c++);
    printf("\ndecrementation of c: %d",c--);

//  Integer Division ,gives nearest integer 
    /*Integer division throws away the fractional part*/
    int quot1 = 5 / 3;
    int quot2 = 7 / 2;
    printf("\nThe value of quot1 is  %d, quot2 is  %d\n", quot1, quot2);
    /*Sign of Quotient ,depends on sign of numerator and denominator*/
    int quot3 =  5 / -3; // -1
    int quot4 = -5 /  3; // -1
    int quot5 = -5 / -3; //  1
    printf("\nThe value of quot3  %d, quot4  %d, quot5  %d\n", quot3, quot4, quot5);

//  Floor Function
    /*Floor means rounding a number down to the nearest integer, even if the number is already negative.
    Symbol: [x] (read as “floor of x”)*/
    float i = 5.8, j = 3.1, k = -2.3;
    printf("The value of floor(i) is %f,\n",floor(i)); // 5.000000
    printf("The value of floor(j) is %f,\n",floor(j)); // 3.000000
    printf("The value of floor(k) is %f,\n",floor(k)); //-3.000000
    /*floor() → returns double
    %f → prints decimals
    Use (int)cast or %.0f to show without .000000*/ 
    printf("The value of floor(i) is %.0f,\n",floor(i));
    printf("The value of floor(j) is %.0f,\n",floor(j));
    printf("The value of floor(k) is %.0f,\n",floor(k));

//  Float Division
    //when you divide numbers in a way that the result can have decimal
    int h = 5, f = 4;
    int quo1 = h / f;  // yaha integer division hoga
    float quo2 = (float)h / f; // yaha float division hoga,
                               // bez (float) typecasting
    printf("The value of quo1 is  %d, quo2 is %f\n", quo1, quo2);

//  Modular Division
    int mod = h % f; // gives the remainder when h is divided by f
    printf("The value of mod is  %d\n",mod);
    /* => it does not operate on floating-point numbers
       => sign do not depend on sign of denominator*/
    int mod1 = -5 % 3; // This will give -2
    int mod2 =  5 % -3; // This will give 2
    int mod3 = -5 % -3; // This will give -2
    printf("mod1 is  %d,mod2 is  %d,mod3 is %d\n",mod1,mod2,mod3);

// Power
    /*we have to include math.h
    for power use pow function */
    int jawab;
    jawab = pow(a,b);
    printf("Jawab is  %d\n",jawab);

    return 0;
}








