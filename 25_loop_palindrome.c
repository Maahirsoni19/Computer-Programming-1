#include<stdio.h>
void main(){
    int n,r,temp,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp= n;
    
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }

    if(rev==temp){
        printf("The number is a palindrome number\U0001F60A");
    }
    else{
        printf("The number is not a palindrome number \U0001F614");
    }
}