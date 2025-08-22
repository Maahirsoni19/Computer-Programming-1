#include <stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);
    if(a<b){
        printf("The greater number is: %d",b);
    }
    else{
        printf("The greater number is: %d",a);
    }
}
