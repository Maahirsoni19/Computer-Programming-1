#include<stdio.h>
int power(a,b){
    int c= a;
    int r=a;
    int d= b;
    for(int i=1;i<d;i++){
        c=c*r;
    }
    return c;
}
void main(){
    int a,b;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    int ans=power(a,b);
    printf("The answer is: %d",ans);
}
