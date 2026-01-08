/*  
    Author  : Umair Farooq
    Program : Palindrome Number
*/
#include<stdio.h>

int main(){
    int num, original;
    int ReverseNum = 0;   // stores the reversed number

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // store original number because num will change in loop
                      // so that we compare it later with reversed

    // Loop runs until all digits of num are processed
    while(num != 0){
        int remainder = num % 10;        // get last digit of number
        ReverseNum = ReverseNum * 10 + remainder;  
        // shift previous digits left and add last digit
        num = num / 10;              // remove last digit from number
    }

    // Check if original number and reversed number are equal
    if(original == ReverseNum)
        printf("%d is a palindrome number\n", original);
    else
        printf("%d is not a palindrome number\n", original);

    return 0;
}

