#include <stdio.h>

void main() {
    int s,key;
    int arr[5];
    int ar2[5];
    for(int i=0;i<5;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        ar2[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        printf("%d, ",ar2[i]);
    }
}