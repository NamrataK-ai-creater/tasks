 //arithmetic mean and harmonic mean
#include <stdio.h>
int main ()
{
	float a,b;
	printf("enter the number ");
	scanf("%f",&a);
	
	printf("enter the number ");
	scanf("%f",&b);
	
	float am,hm;
	
	am=(a+b)/2;
	hm=(a-b)/2;
	printf("%f",am);
	printf("%f",hm);
	return 0;
}

