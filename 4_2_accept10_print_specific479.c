#include <stdio.h>
void main(){
    
    int a[10];
    printf("Enter any 10 values: ");
    for (int i = 0; i<10; i++){
        scanf("%d", &a[i]);
    }
    printf("The 4th, 7th and 9th values you entered are: ");
    int f=1;
    for (int i=0; i<10; i++){
        if (i==3 || i==6 || i==8){
            if(!f){printf(",");}
            printf("%d", a[i]);
            f=0;
        }
    }
    printf(".");
}
