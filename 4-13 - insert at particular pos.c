#include <stdio.h>
void main(){
    int s,key,pos;
    printf("enter the size of array: ");
    scanf("%d",&s);
    int arr[s+2];
    int j=s;
    for(int i=0;i<s;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position at which the element is to be added: ");
    scanf("%d",&pos);
    printf("Enter the element to be added: ");
    scanf("%d",&key);
    printf("The modified array is: ");
    
    while(s>pos-1){
        arr[s+1]=arr[s];
        s--;
    }
    arr[pos-1]=key;
    for(int i=0;i<j+1;i++){
        printf("%d, ",arr[i]);
    }
}