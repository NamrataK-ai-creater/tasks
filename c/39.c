// Write a program to read the marks of 3 subjects and display the total,�avg,�class?
#include<stdio.h>
#include<conio.h>
int main() 
{
int roll_no,m1,m2,m3,total;
float average;

printf("Enter class : ");
scanf("%d",&roll_no);
printf("Enter marks 1 : "); 
scanf("%d",&m1);
printf("Enter marks 2 : ");
scanf("%d",&m2);
printf("Enter marks 3 : ");
scanf("%d",&m3);
total=m1+m2+m3;
average=total/3.0;
printf("\nStudent class : %d",roll_no);
printf("\nMarks 1 : %d",m1);
printf("\nMarks 2 : %d",m2);
printf("\nMarks 3 : %d",m3);
printf("\nTotal : %d ",total);
printf("\nAverage : %f ",average);
}
