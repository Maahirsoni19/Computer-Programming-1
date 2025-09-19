#include<stdio.h>
void main(){
    int n,r,temp=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        temp=(temp*10)+r;
        n=n/10;
    }
    printf("The reversed number is: %d",temp);
}