#include<stdio.h>
int main ()
{
	int i,j,n;
	printf("enter no of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			printf("\n");
		for(j=1;j<=n;j++)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
