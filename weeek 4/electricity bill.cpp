#include<stdio.h>
int main()
{
	int units;
	float bill;
	printf("enter the units: ");
	scanf("%d",&units);
	if (units<=100)
	{
		bill = units*2.50;
	printf("The bill : %.2f Rs only\n",bill);
	} 
	else if (units <=200)
	{
		bill = units*4.50;
		printf("The bill : %.2f Rs only\n",bill);
	}
	else if (units <=300)
	{
		bill = units*4.50;
		printf("The bill : %.2f Rs only\n",bill);
		
	}
	else if (units <=400)
	{
		bill = units*6.60;
		printf("The bill : %.2f Rs only\n",bill);
		
	}
	else if (units <=500)
	{
		bill = units*8.70;
		printf("The bill : %.2f Rs only\n",bill);
		
	}
	else if (units <=600)
	{
		bill = units*10.80;
		printf("The bill : %.2f Rs only\n",bill);
		
	}
	else if (units <=700)
	{
		bill = units*12.90;
		printf("The bill : %.2f Rs only\n",bill);
		
	}
	printf("please pay the bill as soon as possible");
	return 0;
	
}
