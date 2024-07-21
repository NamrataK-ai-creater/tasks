 //Write a program to find the area of a sphere?
#include <stdio.h>
int main() {
    float radius, area;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    area = 4 *3.14* pow(radius, 2);
    printf("The area of the sphere is: %f\n", area);

    return 0;
}
