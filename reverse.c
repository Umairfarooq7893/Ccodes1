#include<stdio.h>
    // declaring a function
    int reverse(int num);

    int main(){
        int number;
        printf("Enter a number: ");
        scanf("%d", &number);

        printf("Reversed number = %d\n", reverse(number));
    
    return 0;
}
int reverse(int num){
    int ReverseNum= 0;
    int remainder;
    while(num!=0){
        remainder = num % 10;
        ReverseNum = ReverseNum*10 +remainder;
        num = num/10;
    }
    return ReverseNum;
}
