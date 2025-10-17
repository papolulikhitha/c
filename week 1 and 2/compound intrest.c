#include<stdio.h>
int main ()
{
	int p,t,r;
	float A,ci;
	printf("enter p,t,r values : ");
	scanf("%d,%d,%d",&p,&t,&r);
	A=p*pow((1+r*0.01),t);
	ci=A-p;
	printf("\n ci is %2.f",ci);
	return 0;

}
