#include <stdio.h>

void main(){
   int a,b,c;
   printf("Enter marks of three subjects:");
   scanf("%d\n %d\n %d",&a,&b,&c);
   int avg=(a+b+c)/3;
   printf("The average is: %d",avg);
}