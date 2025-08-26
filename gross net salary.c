#include <stdio.h>
void main() 
{
float net,s,a,d;
printf("Enter gross salary:");
scanf("%f",&s);
a=0.1*s;
d=0.03*s;
net= s+a-d;
printf("%f",net);
}