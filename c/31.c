 //Two numbers are input into two locations ‘a’ and ‘b’ Write a program to interchange the contents of ‘a’ and ‘b’ without using temporary variables?
#include<stdio.h> 
int main(void) 
{ 
 int a,b; 
 printf("Value of a = %d and b = %d before swapping\n",a,b); 
 scanf("%d%d",&a,&b);
 a = a*b; 
 b = a/b; 
 a = a/b; 
 printf("Value of a = %d and b = %d after swapping\n",a,b); 
} 
