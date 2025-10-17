#include<stdio.h>
#include<string.h>
int main ()
{
	// coded by likhitha
	char str[100];
	int i,len;
	printf("enter any string : ");
	gets(str);
	printf("string is %s",str);
	len=0;
	for (i=0;str[i]!='\0';i++)
	{
	 len ++; 
	}
	printf("\nlength is %d",len);
	printf("\n24B11CS351");
	
	return 0;
}

