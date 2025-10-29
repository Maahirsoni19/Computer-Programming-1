#include <stdio.h>
void main(){
    int s,key;
    printf("enter the size of array: ");
    scanf("%d",&s);
    int arr[s+2];
    for(int i=0;i<s;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be added: ");
    scanf("%d",&key);
    printf("The modified array is: ");
    arr[s]=key;
    for(int i=0;i<s+1;i++){
        printf("%d, ",arr[i]);
    }
}