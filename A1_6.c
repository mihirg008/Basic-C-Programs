/*Read the values (decimal) of a set of N resistances
where the number N should also be read as an input
from the user. Find the equivalent resistance of the
circuit with parallel combination of the given resistances.*/
#include<stdio.h>
int main()
{int n; float r,er;
printf("No. of resistance: ");
scanf("%d",&n);
printf("Resistance value: ");
scanf("%f",&r);
er= r/n;
printf("Equivalent parallel resistance is %f \n",er);
return 0;
}
