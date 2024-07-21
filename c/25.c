 //Write a program to find the volume of a cylinder?
#include <stdio.h>
int main() {
    float radius, height, volume;
    printf("Enter the radius of cylinder:");
    scanf("%f", &radius);
    printf("Enter the height of cylinder: ");
    scanf("%f", &height);
    volume = 3.141* pow(radius,2) * height;
    printf("The volume of cylinder is:%f\n",volume);

    return 0;
}
