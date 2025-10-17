//coded by likhitha 
#include<stdio.h>
#include<string.h>
int main ()
{
	char str[100];
	int i;
	printf("enter any string : ");
	scanf("%[^\n]%*c",str);
	printf(" given string is %s",str);
	for (i=0;str[i]!='\0';i++)
	{
	 if (str[0]>='a'&&str[i]<='z')
	 {
	 	str[i]=str[i]-32;
	 }
	}
	printf("\nsentinal case string is %s",str);
	printf("\n24B11CS351");
	return 0;
}

