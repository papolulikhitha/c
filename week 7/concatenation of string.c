#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[100],str2[100],res[200];
	int i=0,j=0;
	printf("enter first string : ");
	gets(str1);
	printf("enter second string : ");
	gets(str2);
	while(str1[i]!='\0')
	{
		res[i]=str1[i];
		i++;
	}
		while(str2[j]!='\0')
	{
		res[i]=str2[j];
		i++;
		j++;
	}
	res[i]='\0';
	printf("\nconcatenated string is : %s",res);
	return 0;
}

