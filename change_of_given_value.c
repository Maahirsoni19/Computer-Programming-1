#include <stdio.h>

// function to find out the change
int rschange(int a[], int n, int l){
    printf("You need ");
    for (int i=0; i<l; i++){
        int q = n/a[i];
        if (q){printf("%d notes of %dRs., ", q, a[i]);}
        n = n%(a[i]);
    }
}

void main(){
    
    // inputting values
    int n;
    int a[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int l= sizeof(a)/sizeof(a[0]);
    printf("What price do you want change of: ");
    scanf("%d", &n);
    printf("For this amount of money, ");
    rschange(a, n, l); //printing the change
}
