 //	Write a program to print the area of triangle if three sides are given?
#include <stdio.h>

int main() {
    float side1, side2, side3, semi_perimeter, area;
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);
    semi_perimeter = (side1 + side2 + side3) / 2;
    area = semi_perimeter * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3);
    printf("Area of the triangle: %.2f\n", area);
    return 0;
}
