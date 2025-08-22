#include <stdio.h>
void main(){
    float a,b,c,avg;
    printf("Enter marks of three subjects:");
    scanf("%f %f %f", &a,&b,&c);
    avg=(a+b+c)/3;
    //calculating the grade
    if(avg>=70){
        printf("Distinction");
    }
    else if(avg>=60){
        printf("First");
    }
    else if(avg>=50){
        printf("Second");
    }
    else if(avg>=35){
        printf("Third Class");
    }
    else{
        printf("The student has failed");
    }
}
