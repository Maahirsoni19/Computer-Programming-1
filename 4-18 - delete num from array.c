#include <stdio.h>
void main(){
    int s,key;
    printf("enter the size of array");
    scanf("%d",&s);
    int arr[s];
    for(int i=0;i<s;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be deleted: ");
    scanf("%d",&key);
    printf("The modified array is: ");
    for(int i=0;i<s;i++){
        if(key==arr[i]){
            continue;
        }
        else{
            printf("%d, ",arr[i]);
        }
    }
}