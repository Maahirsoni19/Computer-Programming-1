#include<stdio.h>
#include<conio.h>
void main(){
   float f,c;
   printf("Enter value to be converted to celsius:\n");
   scanf("%f",&f);
   c=(f-32)*5/9;
   printf("The value in celsius is: %f",c);
}

