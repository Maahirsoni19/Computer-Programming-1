#include <stdio.h>
void main() {
    int n, a = 0, b = 1, next;

    printf("Enter how many terms do you want: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d %d ", a, b);

    for(int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}
