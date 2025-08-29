#import <stdio.h>
void main(){
    int n;
    float nums,sum=0;

    printf("Enter the number of values to be taken: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("Enter number:%d",i);
        scanf("%f",&nums);
        sum+=nums;
    }

    float mean= sum/10;
    //printing output
    printf("Sum is: %.2f\n",sum);
    printf("Mean is: %.2f",mean);
}


