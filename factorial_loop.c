#import <stdio.h>
void main(){
    int n,m=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        m=m*i;
    }
    printf("%d",m);
}

