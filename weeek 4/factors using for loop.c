#include<stdio.h>
int main ()
{
	int i,n;
	printf("enter the value of i : ");
	scanf("%d",&i);
	for(n=1;i%n==0&&n<=i;n++)
	{
		printf("%d\n",n);
	}
	printf("are the factors of %d",i);
	return 0;
}
