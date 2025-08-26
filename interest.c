#include <stdio.h>

void main() {
    float principal, rate, time, simpleInterest;

    // Taking input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying result
    printf("Simple Interest = %.2f\n", simpleInterest);
}
