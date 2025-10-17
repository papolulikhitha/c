#include<stdio.h>
int main ()
{
	int x,y,z,D,S;
	printf("enter x,y value: ");
	scanf("%d,%d",&x,&y);
	printf("x=%d,y=%d",x,y);
	z=x+y;
	printf("\n sum of x and y is %d",z);
	D=x-y;
	printf("\n diff of x and y is %d",D);
	S=x/y;
	printf("\n division of x and y is %d",S);
	return 0;
}
