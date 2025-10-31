#include <stdio.h>

void main() {
    int ar1[2][2];
    int ar2[2][2];
    int mul[2][2];
    //Input for 1st array
    printf("Enter elements for 1st array");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("Enter element %d, %d: ",i,j);
        scanf("%d",&ar1[i][j]);
        }
    }
    //input for 2nd
    printf("Enter elements for 2nd array");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        printf("Enter element %d, %d: ",i,j);
        scanf("%d",&ar2[i][j]);
        }
    }
    //Multiplying
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            mul[i][j]=ar1[i][j]*ar2[j][i];
        }
    }
    printf("\nThe multiplication of two given matrices is:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d    ",mul[i][j]);
        }
        printf("\n");
    }
}