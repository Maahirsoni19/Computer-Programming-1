#include <stdio.h>

void main() {
    int s,key,ar2[s+2];
    printf("enter the size of array: ");
    scanf("%d",&s);
    int arr[s+2];
    for(int i=0;i<s;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be added: ");
    scanf("%d",&key);
    ar2[0]=key;
    
    for(int i=1;i<s+1;i++){
        ar2[i]=arr[i-1];
    }
    for(int i=0;i<s+1;i++){
        printf("%d, ", ar2[i]);
    }
}