#include<stdio.h>
int main(){
    int a , sum = 0 , originalNum;
// Input number from user    
    printf("Enter an integer: ");
    scanf("%d", &a);
// store the original number to compare later
    originalNum = a;

// Find the number of digits
    while (a > 0) {
        sum = sum + (a%10)*(a%10)*(a%10);
        a = a / 10;     // update, remove last digit
    }  
    if (sum == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}