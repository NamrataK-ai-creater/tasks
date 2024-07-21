#include <stdio.h>
 Given the coordinates of two points (x1,y1) and (x2,y2). Write a program to find the distance between these two points?
#include <stdio.h>
int main() {
    float x1, y1, x2, y2,distance; 
    printf("Input x1:");
    scanf("%f", &x1);
    printf("Input y1:");
    scanf("%f", &y1);
    printf("Input x2:");
    scanf("%f", &x2);
    printf("Input y2:");
    scanf("%f", &y2);
    distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between the points is: %f\n", sqrt(distance));
    return 0;
}

int main(int argc, char *argv[])
{
	printf("Hello, world\n");
	
	return 0;
}
