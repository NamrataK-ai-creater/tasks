 //Write a program to find the simple interest and compound interest?
#include <stdio.h>

int main() {
    float principal, rate, time, simpinterest, compinterest, amount;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter the time period (in years): ");
    scanf("%f", &time);
    simpinterest = (principal * rate * time) / 100;
    amount = principal * (1 + rate / 100);
    compinterest = amount - principal;
    printf("Simple Interest: %f\n", simpinterest);
    printf("Compound Interest: %f", compinterest);
    return 0;
}
