#include <stdio.h>
void main(){
    float gs,ns,d;
    printf("Enter gross sales:");
    scanf("%f", &gs);
    //calculating the discount
    if(gs>20000){
        d=0.15*gs;
    }
    else if(gs>10000){
        d=0.1*gs;
    }
    else{
        d=0.05*gs;
    }
    ns= gs-d;//calculating the net sales
    printf("the net sales is:%f",ns);
}
