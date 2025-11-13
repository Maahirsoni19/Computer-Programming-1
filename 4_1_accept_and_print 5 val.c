#include <stdio.h>
void main(){
    
    int a[5];
    printf("Enter any five values: ");
    for (int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("The 5 values you entered are: ");
    int f=1;
    for (int i=0; i<5; i++){
        if(!f){printf(",");}
        printf("%d", a[i]);
        f=0;
    }
    printf(".");
}
