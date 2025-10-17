#include<stdio.h>
int main()
{
	int T=6,V;
	printf("enter the values of Time in secs(T) and Velocity(V)");
	scanf("%d,%d",&T,&V);
	printf("T=%d,V=%d",T,V);
	int D=T*V;
	printf("\nThe Distance travelled by the car is=%d",D);
	return 0;
}
