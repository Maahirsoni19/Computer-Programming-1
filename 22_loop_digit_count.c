#include<stdio.h>
void main(){
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    //counting the digits
    while(n>0){
        c++;
        n=n/10;
    }

    printf("The number of digits are: %d",c);
}