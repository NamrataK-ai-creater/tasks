#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello, world\n");
	The temperature of the city is input through the keyboard in Fahrenheit. Write a program to convert into Celsius?
#include<stdio.h>
int main()
{
    float f, c;
    printf("Enter city Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("The Temperature in Centigrade Degree: %.2f", c);
    return (0);
}

	return 0;
}
