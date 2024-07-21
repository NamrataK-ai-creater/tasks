 //potential energy
#include<stdio.h>
int main ()
{
	float m,g,h;
	printf("enter the number m");
	scanf("%f",&m);
	
	printf("enter the number g");
	scanf("%f",&g);
	
	printf("enter the numer h");
	scanf("%f",&h);
	
	float pe;
	pe=m*g*h;
	printf("%f",pe);
	return 0;
}
