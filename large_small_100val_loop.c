#include <stdio.h>

void main(){
    int l=1,s=1;
    for(int i=1;i<101;i++){
        if(l<i){
            l=i;
        }       
        if(s>i){
            s=i;
        }
    }
    printf("largest number: %d\n",l);
    printf("smallest number: %d\n",s);
}