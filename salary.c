#include <stdio.h>
void main(){
    float gs,a,d,ns;
    printf("Enter Gross salary:");
    scanf("%f", &gs);
    if(gs>10000){
        a=gs*0.1;
        d=gs*0.03;
    }
    else if(gs>5000){
        a=gs*0.07;
        d=gs*0.02;
    }

    ns=gs+a-d;
    printf("The net salary is: %f",ns);

}
