//Write a program to find the your age in days?
#include <stdio.h>
int main()
 {
    int currentday, currentMonth, currentyear, birthday, birthMonth, birthyear, ageInDays;
    printf("Enter the current date (DD MM YYYY):");
    scanf("%d %d %d",&currentday,&currentMonth,&currentyear);
    printf("Enter your birthdate (DD MM YYYY):");
    scanf("%d %d %d", &birthday, &birthMonth, &birthyear);
    ageInDays = (currentday - birthday) * 365 + (currentMonth - birthMonth) * 30 + (currentyear + birthyear);
    printf("Your age in days is: %d", ageInDays);
    return 0;
}
