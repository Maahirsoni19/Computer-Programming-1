#include <stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping: a = %d, b = %d\n", a, b);
}

void main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nBefore calling swap function:");
    printf("\nx = %d, y = %d\n", x, y);
    
    swap(x, y);
    
    printf("\nAfter calling swap function:");
    printf("\nx = %d, y = %d\n", x, y);
}
