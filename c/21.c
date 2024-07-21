 //Write a program to find the area and perimeter of a square?
#include <stdio.h>
int main() 
{
    float side,area,perimeter;
    printf("Enter the side:");
    scanf("%f",&side);
    area = side * side;
    perimeter = 4 * side;
    printf("The area is:%f\n",area);
    printf("The perimeter is:%f\n",perimeter);
   return 0;
}
