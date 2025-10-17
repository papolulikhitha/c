#include<stdio.h>
int main()
{
	int a[20],n,i,t;
	int b[20],c[20];
	printf("enter size of an array: \n");
	scanf("%d",&n);
	printf("enter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("elements after reversing : \n",n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}


