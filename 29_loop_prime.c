#include<stdio.h>
void main(){
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        printf("Prime number!!");
    }
    else{
        printf("Not a prime number");
    }
}