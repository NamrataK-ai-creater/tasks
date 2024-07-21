 // kinetic energy 
#include<stdio.h>
int main()
{
    float m,v;
	printf("enter the no m =");
    scanf("%f",&m);
    
	printf("enter the no v="); 
	scanf("%f",&v);
	float kE;
	kE=0.5*m*v*v;
	printf("%f",kE);
	return 0;
}
