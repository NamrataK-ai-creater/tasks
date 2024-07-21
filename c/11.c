 //find temprature in c kelvin 
#include<stdio.h>
int main()
{
	float f,c,k;
	printf("enter the f:");
	scanf("%f",&f);
	c=(9/5)*(f*32);
	k=c+273.15;
	printf("the c is=%f\n",c);
	printf("the k is=%f",k);
	return 0;
}
