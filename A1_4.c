/*Write a program to read two 
floating point values from the user, and display the one having the
larger fractional part. For example if two entered values are 21.365
and 131.354, your program should display “21.365 has larger fractional part.”*/
#include<stdio.h>
int main()
{float n1,n2,a,b;
printf("enter 2 no.'s: ");
scanf("%f %f",&n1,&n2);
a=n1-(int)n1;
b=n2-(int)n2;

if(a>b)
	{
	printf("larger part is %f \n",n1);
	}

else if(b>a)
	{
	printf("larger part is %f \n",n2);
	}

else if(a==b)
	{
	printf("both are equal \n");
	}
return 0;
}
