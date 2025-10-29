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
    //to search for a element
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(int i=0;i<s;i++){
        if(key==arr[i]){
            printf("The element was found at position: %d",i+1);
        }
    }
}