#include <stdio.h>
#include <string.h>
void main(){
    char ch[100];
    char rev[100];
    printf("Enter a string: ");
    scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++){
       rev[i]=ch[len-i-1];
    }
    for(int i=0;i<len;i++){
       printf("%c\n", rev[i]);
    }
}