#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter Three numbers:");
    scanf("%d %d %d", &a,&b,&c);
    int s;
    int l;
    //to find the smallest number
    if(a<b){
        s=a;
    }
    else if(b<a){
        s=b;
    }
    if(c<s){
        s=c;
    }
    //to find the largest number
    if(a>b){
        l=a;
    }
    else if(b>a){
        l=b;
    }
    if(c>l){
        l=c;
    }

    printf("%d is the largest number\n.",l);
    printf("%d is the smallest number",s);


}
