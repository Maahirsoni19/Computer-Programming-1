#include<stdio.h>
int leap(int a){
    if(a%4==0){
        return 1;
    }
    else{
        return 0;
    }
}
void main(){
    int a;
    printf("Enter the year to be checked: ");
    scanf("%d",&a);
    if(leap(a)==1){
        printf("It is a leap year");
    }
    else{
        printf("It is not a leap year");
    }
}
