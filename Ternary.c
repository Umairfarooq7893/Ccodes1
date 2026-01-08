// condition ? expression1 : exspression2;
// if condition is true then expression1 is executed ,otherwise expression2
#include<stdio.h>
#include<conio.h>
int main(){
    int marks,Skills;
    printf("enter marks and Skills points:");
    scanf("%d %d",&marks,&Skills);
    (marks >= 20)? printf("you are pass"):printf( "you are fail");
    char a[] = {"you are pass"};
    char b[] = {"You are fail"};
    (Skills >= 20)?printf("\n%s",a):printf("\n%s",b);
    return 0;
}