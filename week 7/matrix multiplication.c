#include<stdio.h>
int main ()
{
	int a[10][10],b[10][10],m,n,p,q;
	int c[10][10],i,j,k;
	printf("enter rows and columns of matrix a : ");
	scanf("%d %d",&m,&n);
	printf("enter rows and columns of matrix b : ");
	scanf("%d %d",&p,&q);
	if(n==p)
	{
		printf("enter the elements of a\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",a[i][j]);
			}
		}
		printf("enter the elements of b\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",b[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for (j=0;j<q;j++)
			{
				c[i][j]=0;
				for (k=0;k<n;k++)
				{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("matrix mul elements are : \n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
	 ("matrix multiplication not possible");
	}
	return 0;
}
