#import <stdio.h>
void main(){
    float n;
    float sum=0;
    printf("enter any 10 values:\n");
    for(int i=1;i<=10;i++){
        scanf("%f",&n);
        sum+=n;
    }
    float mean= sum/10;
    //printing output
    printf("Sum is: %.2f\n",sum);
    printf("Mean is: %.2f",mean);
}

