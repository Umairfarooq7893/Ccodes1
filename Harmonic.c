#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    float harmonic_mean = 3.0/((1.0/a) +(1.0/b)+(1.0/c));
    printf("The harmonic mean of three numbers is: %.2f",harmonic_mean);
    /* While doing the calculation
       taking data type as float, use float constants like 1.0, 2.0, 3.0 
       because 1/ a will give a float value same will give others
       but their sum is to be divide the number n = 3 , which is natural always 
       hence here error will occur , due ko datatype difference
    */   
    return 0;
}