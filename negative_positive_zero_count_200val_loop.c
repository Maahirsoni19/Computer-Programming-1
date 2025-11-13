#include <stdio.h>
void main() {
    int a[200]; //initializing an array with random values.
    int neg=0;
    int pos=0;
    int zer=0;

    // filling up the array
    for(int i=0; i<200; i++){
        a[i]=i-100;
    }

    printf("Press Enter to see the 200 random values generated: ");
    getchar();
    // printing all the values to be sure of what values were generated.
    for(int i=0; i<200; i++){
        printf("%d\n", a[i]);

    }

    // couting number of pos, neg and zeros
    for (int i=0; i<200; i++){
        if (a[i]<0){
            neg+=1;
        }
        else if(a[i]>0){
            pos+=1;
        }
        else{
            zer+=1;
        }
    }
    printf("Press Enter to see the number of Positive, Negative and Zero values.");
    getchar();
    printf("Total Positive values = %d, Total Negative values = %d, Total Zeros = %d", pos, neg, zer);

}