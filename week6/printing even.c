#include<stdio.h>
int main()
{
	int a[60],n,i,s;
	printf("enter size of an array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=i*2;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
