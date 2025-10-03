#include<stdio.h>
void main(){
    int s;
    printf("Enter the size of array");
    scanf("%d", &s);
    int a[s][s];
    int b[s][s];
    int c[s][s];
    int d[s][s];
    int e[s][s];
    //Taking input of first array
    printf("Enter values in a");
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //Taking input of second array
    printf("Enter values in b");
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            scanf("%d",&b[i][j]);
        }
    }

    //Adding two arrays
    printf("The sum of two arrays is:\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
    //Subtracting two arrays
    printf("The subtraction of two arrays is:\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            printf("%d  ",d[i][j]);
        }
        printf("\n");
    }
    //Multiplying two arrays
    printf("The multiplication of two arrays is:\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
                e[i][j]=a[i][j]*b[j][i];
        }
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            printf("%d  ",e[i][j]);
        }
        printf("\n");
    }
}
