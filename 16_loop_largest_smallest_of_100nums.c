#include <stdio.h>
int main() {
    int a[100];
    for(int i=0; i<100; i++){
        a[i] = i + 1;
    }

    int max = a[0];
    int min = a[0];

    for(int i=0; i<100; i++){
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("Max value is %d and Min value is %d\n", max, min);
    return 0;
}