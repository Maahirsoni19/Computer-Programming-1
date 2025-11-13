#include<stdio.h>
void main(){
    int f = 1;
    for (int n = 1; n<= 500; n++){
        int c = 0;
        for (int i = 1; i<= n; i++){
            if (n%i == 0){
            c+=1;
            }
        }
        if (c==2){
            if (!f){printf(", ");}
            printf("%d", n);
            f = 0;
        }
        else{
            continue;
        }
    }
    printf(".");
}
