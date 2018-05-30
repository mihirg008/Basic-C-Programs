/*Write a program that takes
as input ‘a’, ‘b’, and ‘c’ and finds all the roots for
the quadratic equation ax^2 + bx + c = 0.*/
#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
printf("enter a,b,c : ");
scanf("%d,%d,%d",&a,&b,&c);
float D=sqrt(pow(b,2)-(4*a*c));
if(D>=0f)
	{float r1= ((-b) + D)/(2*a);
	float r2= ((-b) - D)/(2*a);
	printf("roots are %f,%f /n",r1,r2);
	}
else
	{
	printf("Complex Roots");
	}
return 0;
}
