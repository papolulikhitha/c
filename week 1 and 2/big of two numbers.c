#include <stdio.h>
int main()
{
	int a=5,b;
	printf("enter the values of a,b=");
	scanf("%d,%d",&a,&b);
	int z=a>b?a:b;
	printf ("the big number is = %d",z);
	return 0;
}
