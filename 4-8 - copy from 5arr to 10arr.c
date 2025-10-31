#include <stdio.h>

void main() {
    int s,key;
    int arr[5];
    int ar2[10];
    for(int i=0;i<5;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<10;i++){
            ar2[j]=arr[i];
            j=j+2;
    }
    for(int i=0;i<10;i++){
        printf("%d, ",ar2[i]);
    }
}