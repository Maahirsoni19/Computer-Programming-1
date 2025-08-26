#include<stdio.h>

void main(){
    int l, b, p, a;
    printf("Enter the length and breadth of rectangle:");
    scanf('%d %d', &l, &b);
    p = 2 * (l + b);
    a=l*b;
    printf("The perimeter is:%d", p);
    printf("The area is:%d", a);
}