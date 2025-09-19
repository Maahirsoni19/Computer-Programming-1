#include<stdio.h>
void main(){
    int i,j=0;
    for(i=1;i<101;i++){
        if(i%5==0){
            printf("%d\n",i);
            j++;
        }
    }
    printf("The number of digits in the range of 1 to 100 divisible by 5 are: %d", j);   
}