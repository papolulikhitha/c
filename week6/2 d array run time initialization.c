#include<stdio.h>
int main ()
{
	int i,j,r,c;
	int arr[10][10];
	printf("enter row size r = ");
	scanf("%d",&r);
	printf("enter column size c = ");
	scanf("%d",&c);
	printf("enter elements : \n");
	for (i=0;i<r;i++) //run time initialization
	{
		for (j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("elements are \n");
	for (i=0;i<r;i++)  //for accessing.
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
