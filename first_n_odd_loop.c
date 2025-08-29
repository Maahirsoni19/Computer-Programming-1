#import <stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int l =2*n;
    for(int i=1;i<l;i++){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
}


