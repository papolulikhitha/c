#include<stdio.h>
int main ()
{
	int i,j,n;
	printf("enter no of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
			printf("\n");
			int nn = n+1;
		for(j=n;j>=nn-i;j--)
		{
			printf("%d ",j);
		}
	}
	return 0;
}
