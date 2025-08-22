#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c,d,f;
    float e;
    printf("Enter two numbers to be added:");
    scanf("%d %d",&a,&b);
    c=a+b;
    d=a*b;
    e=a/b;
    f=a-b;
    printf("%d+%d=%d\n",a,b,c);
    printf("%d-%d=%d\n",a,b,f);
    printf("%d*%d=%d\n",a,b,d);
    printf("%d/%d=%f\n",a,b,e);


}
