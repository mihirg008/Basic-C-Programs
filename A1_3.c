/* Assuming every year is made of
365 days and every month consists of 30 days, write a program
that prompts the user to enter “number of days” and uses integer
arithmetic to convert the number of days into years, months, and days.*/
#include<stdio.h>
int main()
{int d,y,m;
printf("Enter no. of days: ");
scanf("%d",&d);
y=d/365;
m=d/30;
printf(" Years =%d \n Months =%d\n",y,m);
return 0;
}
