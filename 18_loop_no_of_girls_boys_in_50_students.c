#include <stdio.h>
void main() {

    //initialising array + defining b/g couting vars
    char a[50];
    int b=0, g=0;


    // filling up the array - even boys and odd girls.
    for (int i=0; i<50; i++){
        printf("Enter sex code %d (b/f): ",i+1);
        scanf(" %c", &a[i]);
    }

    printf("Press Enter to see the 50 students as per sex code: ");
    getchar();
    // printing all the values to be sure of what values were generated.
    for(int i=0; i<50; i++){
        printf("%c\n", a[i]);

    }

    // couting number of pos, neg and zeros
    for (int i=0; i<50; i++){
        if (a[i]=='b'){
            b+=1;
        }
        else if(a[i]=='g'){
            g+=1;
        }
    }
    printf("Press Enter to see the number Boys and Girls: ");
    getchar();
    printf("Total Boys = %d, Total Girls = %d", b, g);

}