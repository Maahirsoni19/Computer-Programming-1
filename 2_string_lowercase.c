#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("The string in lowercase is: %s",strlwr(str));
}
