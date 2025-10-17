#include<stdio.h>
int main()
{
	float x,y,percentage;
	printf("enter the numbers x,y=");
	scanf("%d,%d",&x,&y);
	printf("x=%d,y=%d",x,y);
	percentage=(x/y)*100;
	printf("\nThe percentage of x and y is=%f",percentage);
	return 0;
	
}
