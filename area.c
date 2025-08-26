#include<stdio.h>

void main(){

    int l,p,a;
    printf("Enter the length of square");
    scan('%d',&l );
    p = 4 * l;
    a = l * l;
    printf("The perimeter is:%d", p);
    printf("The area is:%d", a);
}