#include <stdio.h>

void main(){
   float f,c;
   printf("Enter value to be converted to farenheit:\n");
   scanf("%f",&c);
   f=(c*9/5)+32;
   printf("The value in celsius is: %f",f);
}