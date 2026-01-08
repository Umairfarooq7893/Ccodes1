/*  Author  : Umair Farooq
    Program : String Palindrome*/
#include <stdio.h>
#include <string.h>

int main() {
//Getting Input frome user
    char str[100];
    printf("enter a string: ");
    scanf("%s",&str);

//copying the input string into original_string to compare it later
    char original_string[100];
    strcpy(original_string, str);
    printf("Original string: %s\n", original_string);
//Reversing String
    strrev(str);
    printf("Reversed string: %s\n", str);
// Palindrome Condition
    if(strcmp(original_string,str) == 0){
        printf("The given string is a Palindrome\n");
    } else {
        printf("The given string is Not a Palindrome\n");
    }
    return 0;
}