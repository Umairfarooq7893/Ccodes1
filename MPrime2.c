#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle base cases that are clearly not prime
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Loop from 2 up to num-1 to check for divisors
    for (i = 2; i < num; i++) {
        // If 'num' is perfectly divisible by any 'i', it's not prime
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0; // Exit the program immediately
        }
    }
    
    // If the loop completes without returning, the number is prime
    printf("%d is a prime number.\n", num);

    return 0;
}