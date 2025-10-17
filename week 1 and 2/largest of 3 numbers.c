#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 numbers a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);	
	int big=((a>b)&&(a>c)?a:(b>c)?b:c);
	printf("the largest number is=%d",big);
	return 0;
}
