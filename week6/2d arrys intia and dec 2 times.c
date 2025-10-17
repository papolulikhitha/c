#include<stdio.h>
int main ()
{
	int i,j,r,c,p,q;
	int a[10][10];
	int b[10][10];
	printf("for 1st array, enter row size r,column size c  \n ");
	scanf("%d,%d",&r,&c);
	printf("enter elements of first array : \n");
	for (i=0;i<r;i++) //run time initialization
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("elements are of first array\n");
	for (i=0;i<r;i++)  //for accessing.
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("for 2nd array, enter row size p,column size q  \n ");
	scanf("%d,%d",&p,&q);
	printf("enter elements of second array : \n");
	for (i=0;i<r;i++) //run time initialization
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("elements are of second array\n");
	for (i=0;i<r;i++)  //for accessing.
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
