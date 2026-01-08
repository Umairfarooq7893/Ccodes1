#include<stdio.h>
// defining prototype
int sumOfDigits(int num);
 
int main() {
    int number;
// Input from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
// Calculate and display sum of digits
    printf("Sum of digits = %d\n", sumOfDigits(number));
    
    return 0;
}
int sumOfDigits(int num){
    int sum = 0;
    
// Keep extracting digits until number becomes 0
    while (num != 0) {
        sum += num % 10;    // Add last digit to sum
        num = num / 10;     // Remove last digit
    }
    
    return sum;
}