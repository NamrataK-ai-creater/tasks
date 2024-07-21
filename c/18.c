 //Write a program to multiply and divide two numbers and print them in the form of equation (4*3=12 8/4=2)?
#include<stdio.h>
int main()
{
	int a,b,multiply,divide;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number:");
	scanf("%d",&b);
	multiply=a*b;
	printf("addition is=%d\n",multiply);
	divide=a/b;
	printf("division is=%d",divide);
	return 0;
	
}

