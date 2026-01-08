/*  
    Author  : Umair Farooq
    Program : Factorial
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int n ;
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);

    int fact = 1;
    for(int i = 1 ;i <= n ;i++){
        fact = fact *i ;
        printf("%d\n",fact); // will print fact at each iteration of i
    }
    printf("Factorial of %d is %d",n,fact); // prints the final value of fact
    
    return 0;
}