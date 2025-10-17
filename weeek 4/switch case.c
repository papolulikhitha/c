#include<stdio.h>
int main ()
{
	int a,b;
	char n;
	printf("Enter two values : ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter arthematic operation : ");
	scanf("%c",&n);
	switch(n)
	{
		case'+':printf("Add is %d\n",a+b); break;
		case'-':printf("Sub is %d\n",a-b); break;
		case'*':printf("Mul is %d\n",a*b); break;
		case'/':printf("Div is %d\n",a/b); break;
		case'%':printf("Mod is %d\n",a%b); break;
		default:
			printf("invalid operation\n");
	}
	printf("Thank you , visit again :) ");
	return 0;
}
