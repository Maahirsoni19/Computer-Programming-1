#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    char str1[100];
    strcpy(str1,str);
    printf("%s",str1);
}
