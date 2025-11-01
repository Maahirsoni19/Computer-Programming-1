#include <stdio.h>
#include <string.h>
void main() {
    char str[100];
    char rev[100];
    printf("Enter a string: ");
    scanf("%s",str );
    int j=strlen(str);
    for(int i =0;i<j;i++){
        rev[i]=str[j-i-1];
    }
    printf("Reversed string is %s", rev);
}