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
    key=arr[s-1];
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