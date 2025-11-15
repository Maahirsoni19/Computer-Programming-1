#include<stdio.h>
void main(){
    char books[3][100];
    char (*p)[100]=books;
    printf("enter book name");
    for(int i=0;i<3;i++){
        scanf("%s",&books[i]);
    }
    for(int i=0;i<3;i++){
        printf("%s\n",*(p+i));
    }
}
