#include<stdio.h>
int main(){
//Operator precedence
    //The order in which operators are evaluated in an expression.
    //*,/,% has more precedence than +,- than =

    int z = 5 + 2 * 3;  // Here, * has higher precedence than +, so 2 * 3 is evaluated first
    printf("value of z = %d \n",z);

//Associativity (for same precedence)
    //The order in which operators of the same precedence are evaluated.
    //For example,in the expression 5-2+3,-and+ have the same precedence.
    //but - is evaluated first bez of left-to-right associativity.
    int x1 = 5 - 2 + 3;
    int x2 = 5 - (2 + 3); // parentheses change the order of evaluation
    printf("value of x1 = %d \n",x1); // x1 = 6
    printf("value of x2 = %d \n",x2); // x2 = 0

    int y1 = 4*3 / 6*2;                 // * & / have the same precedence,
    printf("value of y1 = %d \n",y1);   // hence evaluated left to right , result is 4

    int y2 = 5*3-4*3;
    int y3 = 5*2/2*3;
    int y4 = 5+2/2*3;
    int y5 = 5*(2/2)*3;
    int y6 = 5+2/2*3;
    printf("y2= %d,y3= %d,y4= %d,y5= %d,y6= %d \n",y2,y3,y4,y5,y6);
    
    return 0;
}
    