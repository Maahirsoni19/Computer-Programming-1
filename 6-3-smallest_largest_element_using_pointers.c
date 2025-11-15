#include <stdio.h>
void main() {
    int arr[3][3];
    int *p=&arr[0][0];
    printf("enter 9 elements in the array: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int smallest=*p;
    int largest=*p;
    for(int i=0;i<9;i++){
        if(*(p+i)<smallest){
            smallest=*(p+i);
        }
        if(*(p+i)>largest){
            largest=*(p+i);
        }
    }
    printf("Largest element: %d\n",largest);
    printf("Smallest element: %d",smallest);
}
