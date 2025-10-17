//coded by likhitha 
#include<stdio.h>
#include<string.h>
int main ()
{
	char str[100];
	int i;
	printf("enter any string : ");
	scanf("%[^\n]%*c",str);
	printf("Given string is %s",str);
	for (i=0;str[i]!='\0';i++)
	{
	 if (str[i]>='a'&&str[i]<='z')
	 {
	 	str[i]=str[i]-32;
	 }
	 else if (str[i]>='A'&&str[i]<='Z')
	 {
	 	str[i]=str[i]+32;
	 }
	 
	}
	printf("\ntoggle case string is %s",str);
	printf("\n24B11CS351");
	return 0;
}

