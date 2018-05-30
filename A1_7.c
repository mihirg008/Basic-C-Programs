/*Evaluate the value of a third degree polynomial in single
variable with decimal coefficients for different values of
the variable. The program prompts the user to enter the
coefficients of x^3, x^2, x^1, and the constant term. It then
asks the user to input the value of x at which the user
wants to evaluate polynomial at. Finally, the program outputs
the value of the polynomial at the number input.*/
#include<stdio.h>
int main()
{int a,b,c,d; float x,res;
printf("enter coeff a,b,c,d :");
scanf("%d,%d,%d,%d",&a,&b,&c,&d);
printf("enter x: ");
scanf("%f",&x);
res = (a*x*x*x)+(b*x*x)+(c*x)+d;
printf("value of func is = %f \n",res);
return 0;
}
