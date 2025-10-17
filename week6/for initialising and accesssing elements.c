#include<stdio.h>
int main()
{
	int a[20],n,i,s;
	printf("enter size of an array: \n");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
