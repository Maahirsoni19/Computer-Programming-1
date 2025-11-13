#include <stdio.h>

void main() {
    int s,key;
    int arr[4][4];
    int transpose[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        printf("Enter element %d, %d: ",i,j);
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    printf("\nThe transpose of matrix is:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d    ",transpose[i][j]);
        }
        printf("\n");
    }

}
