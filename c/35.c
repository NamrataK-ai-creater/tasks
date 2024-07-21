// Write a program which accepts the amount in dollars and convert into rupees?
#include <stdio.h>

int main(void) 
{
	float dollars;
	printf("enter dollars:");
	scanf("%f",&dollars);
	float rupees=dollars*82;
	printf("%f Rupees",rupees);
}
