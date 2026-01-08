#include<stdio.h>
int main(){
//Type Conversion  
  /*int operate with int gives int
    int operate with float gives float
    float operate with float gives float
    
//  int operate with double gives double
//  float operate with double gives double
//  double operate with double gives double*/
    printf("%d \n",2 * 2);
    printf("%f \n",2 * 2.0);
    printf("%f \n",2.0 * 2.0);

//two types of Conversion
    /*(a) Implicit Conversion
        Compiler does automatically it */
    /*(b) Explicit Conversion
        Compiler does not do it automatically
        we have to do it manually using typecasting  */
    int x = (int)1.9999999; 
    printf("%d \n",x);       // this gives whole number part only

    float y = (float)8/3;
    printf("%f \n",y);      // give decimal part also
    int y1 = 8/3;
    printf("%d \n",y1);     // this gives whole number part only
    return 0;
}