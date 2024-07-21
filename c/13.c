//accept 5 subject from user and calculate total and percentange 
#include<stdio.h>
int main()
{
	int  m1,m2,m3,m4,m5,total;
	float per;
	printf("entr the mark\n");
	scanf("%d",&m1);
	printf("entr the mark\n");
	scanf("%d",&m2);
	printf("entr the mark\n");
	scanf("%d",&m3);
	printf("entr the mark\n");
	scanf("%d",&m4);
	printf("entr the mark\n");
	scanf("%d",&m5);
	total=m1+m2+m3+m4+m5;
	per=total/5;
	printf("total=%d\n",total);
	printf("per=%f",per);
	return 0;

}