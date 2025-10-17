#include<stdio.h>
int main ()
{
	int x=55;
	int y,z;
	printf("enter x,y value: ");
	scanf("%d,%d",&x,&y);
	printf("x=%d,y=%d",x,y);
	z=x-y;
	printf("\n diff of x and y is %d",x,y,z);
	return 0;
}
