#include<stdio.h>
int main ()
{
	float F;
	printf("enter the temperature in fahrenheit");
	scanf("%f",&F);
	float C=(F-32)*5/9;
	printf("the temperature in celsius is = %.2f",C);
	return 0;
}
