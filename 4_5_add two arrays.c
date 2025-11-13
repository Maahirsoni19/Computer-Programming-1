#include <stdio.h>

// function to find out the sum
void add(int n, int a1[n][n], int a2[n][n]){
    int s[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            s[i][j] = a1[i][j] + a2[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("Element (%d,%d): %d \n", i, j, s[i][j]);
        }
    } 
}

void main(){
    
    // inputting values
    int n;
    printf("Enter the length of your arrays: ");
    scanf("%d", &n);
    int a1[n][n] = {}, a2[n][n] = {};
    printf("Enter elements of your array 1: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("Element (%d,%d): ", i, j);
            scanf("%d", &a1[i][j]);
        }
    }   
    printf("Enter elements of your array 2: \n");
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            printf("Element (%d,%d): ", i, j);
            scanf("%d", &a2[i][j]);
        }
    } 
    printf("The addition of both the arrays is: \n");
    add(n,a1,a2); //printing the addition
}
