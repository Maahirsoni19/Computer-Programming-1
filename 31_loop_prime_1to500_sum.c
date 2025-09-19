#include<stdio.h>
void main(){
    int sum=0;
    for(int i=1;i<501;i++){
            int c=0;
        for(int j=1;j<i;j++){
            if(i%j==0){
               c++;
            }
        }
        if(c==1){
                   sum=sum+i;
            }
    }
    printf("%d",sum);
}
