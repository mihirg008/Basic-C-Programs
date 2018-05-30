/*Prompt the user to input the
co-ordinates of two points on a plane. Compute the Euclidean
distance between the two points and display the result.*/
#include<stdio.h>
#include<math.h>
int main()
{int x1,x2,y1,y2;
printf("point1:");
scanf("%d,%d",&x1,&y1);
printf("point2:");
scanf("%d,%d",&x2,&y2);
float dis = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
printf("distance=%f \n",dis);
return 0;
}
