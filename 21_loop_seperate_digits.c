#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int r;
    while(n>0){
        r=n%5;
        printf("%d",r);
        n=n/10;

    }
}