#include<stdio.h>
int main ()
{
	int n,s=0,r,t;
	printf("enter a number: ");
	scanf("%d",&n);
	t=n;
	while(t>0)
	{
		r=t%10;
		s=s+r*r*r;
		t=t/10;	
	}
	if(s==n)
	printf("%d is armstrong number",n);
	else 
	printf("%d is not an armstrong number",n);
	return 0;
}
