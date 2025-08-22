#include<stdio.h>
#include<conio.h>

void main(){
  float b,k,m,g;
  printf("Enter value to be converted:");
  scanf("%f",&b);
  k=b/1024;
  m=k/1024;
  g=m/1024;
  printf("The value in kb is: %f/n",k);
  printf("The value in mb is: %f/n",m);
  printf("The value in gb is: %f/n",g);
}
