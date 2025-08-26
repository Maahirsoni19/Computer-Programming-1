#include <stdio.h>
void main() 
{
float net,s;
printf("Enter gross sales:");
scanf("%f",&s);
net= s-(0.1*s);
printf("%f",net);
}