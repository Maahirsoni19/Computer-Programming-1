#include <stdio.h>

// function to sort the array
int sort(int a[], int n){
    int f=1;
    for (int i=0; i<n; i++){
        int min = i;
        for (int j=i+1; j<n+1; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        if (min!=i){
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    
    for (int i=1; i<n+1; i++){
        if(!f){printf(",");}
        printf("%d", a[i]);
        f=0;
    }
}

void main(){
    
    // inputting values
    int n=5;
    int a[6];
    printf("Enter any 5 values: ");
    for (int i = 0; i<5; i++){
        scanf("%d", &a[i]);
    }
    printf("The sorted array is: ");
    sort(a,n);
}
