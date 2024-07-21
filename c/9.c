 //find area and perimeter of ring
#include<stdio.h>
int main()
{
	float a,b,p,A;
	printf("enter the number :");
	scanf("%f",&a);
	printf("enter the number :");
	scanf("%f",&b);
	p=2*3.14*(a+b);
	A=2*3.14*(a-b)*(a+b);
	printf("area is=%f\n",A);
	printf("perimeter of ring is =%f",p);
	return 0;
		

}
