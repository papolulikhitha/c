#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int len=0,i;
	printf("enter any string :");
	gets(str);
	printf("string is %s",str);
	while (str[len]!='\0')
	{
		len++;
	}
	for(i=0;i<len;i++)
	{
		rev[i]=str[len-i-1];
	}
	rev[len]='\0';
	printf("\n reversed string is : %s",rev);
	return 0;
}

