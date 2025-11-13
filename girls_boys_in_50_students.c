#include <stdio.h>
void main() {
    char a[50];
    int b=0, g=0;

    for (int i=0; i<50; i++){
        printf("Enter sex code %d (b/f): ",i+1);
        scanf(" %c", &a[i]);
    }

    printf("Press Enter to see the 50 students as per sex code: ");
    getchar();
    for(int i=0; i<50; i++){
        printf("%c\n", a[i]);

    }
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