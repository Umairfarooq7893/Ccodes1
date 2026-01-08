#include<stdio.h>
#include<conio.h>
int main(){
    int n ;
    printf("Enter the number upto which sum is to be calculated :");
    scanf("%d",&n);

    int sum = 0;
    int i = 0;
    // using while loop
    while(i<=n){
        sum = sum + i; // or sum+= i;
        i ++;
    /*printf("The sum of first %d natural numbers is: %d",n,sum);
    cannot write it here bez , at each iteration of the loop ,the sum is being updated
    hence it will be printed at each iteration*/
    }
    printf("The sum of first %d natural numbers using while loop is: %d",n,sum);

    // using for loop
    int add = 0;
    for(int j=0; j<=n; j++){
       add = add + j;
    }
    printf("\nThe sum of first %d natural numbers using for loop is: %d",n,add);
    return 0;
}