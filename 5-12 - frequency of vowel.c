#include <stdio.h>
#include <string.h>
void main(){
    char ch[100];
    char rev[100];
    int a=0,e=0,i=0,o=0,u=0;
    printf("Enter a string: ");
    scanf("%s",ch);
    int len=strlen(ch);
    for(int j=0;j<len;j++){
       if(ch[j]=='a'){
           a++;
       }
       if(ch[j]=='e'){
           e++;
       }
       if(ch[j]=='i'){
           i++;
       }
       if(ch[j]=='o'){
           o++;
       }
       if(ch[j]=='u'){
           u++;
       }
    }
    printf("The frequency of a is %d\n",a);
    printf("The frequency of e is %d\n",e);
    printf("The frequency of i is %d\n",i);
    printf("The frequency of o is %d\n",o);
    printf("The frequency of u is %d\n",u);
}