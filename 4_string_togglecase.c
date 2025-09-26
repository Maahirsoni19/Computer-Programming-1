#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    printf("%s",str);
}
