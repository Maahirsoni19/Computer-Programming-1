#include <stdio.h>
void maxmin(int arr[], int n, int *max, int *min){
    *max=arr[0];
    *min=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
    }
}
void main(){
    int arr[100];
    int max,min,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    maxmin(arr, n, &max, &min);
    printf("\nMaximum value = %d", max);
    printf("\nMinimum value = %d\n", min);
}
