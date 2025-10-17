#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter i value: ");
	scanf("%d",&i);
	j=(i++) + (++i) ;
	printf("\n %d",j);
	return 0;
}

