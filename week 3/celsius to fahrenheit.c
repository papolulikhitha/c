#include<stdio.h>
int main()
{
	float C;
	printf("enter the temperature in celsius= ");
	scanf("%f",&C);	
	float F=(9/5.0)*C+32;
	printf("the temperature in fahrenheit is=%.2f",F);
	return 0;
}
