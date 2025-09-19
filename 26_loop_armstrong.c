#include<stdio.h>
void main(){
    int r,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(sum==temp){
        printf("Yes, it is an armstrong number");
    }
    else{
        printf("No, it is not an armstrong number");
    }
}