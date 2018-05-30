/*Write a C program that reads lengths of three sides of a 
triangle and computes its area. Also tests whether the
triangle is isosceles or equilateral. */
#include<stdio.h>
#include<math.h>
int main()
{float a,b,c,s,area;
printf("Enter sides a,b,c:");
scanf("%f,%f,%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
if(a<(b+c) && b<(a+c) && c<(b+a))
	{
	if(a==b && b==c)
		{printf("Equilateral,Area is %f \n",area);
		}
	else if(a==b || b==c || c==a)
		{printf("Isoceles,Area is %f \n",area);
		}
	else
		{printf("Scalene,Area is %f \n",area);
		}
	}
else
	{printf("triangle not exist \n");
	}
return 0;
}
