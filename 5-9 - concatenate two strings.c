#include <stdio.h>
#include <string.h>
void main() {
    char str1[100];
    char str2[100];
    printf("Enter 1st string: ");
    scanf("%s",str1);
    printf("Enter 2nd string: ");
    scanf("%s",str2);
    printf("The concatenated string is: ");
    printf("%s",strcat(str1,str2));
}