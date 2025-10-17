#include<stdio.h>
#include<string.h>
int main ()
{
	char str[100];
	int i,flag=0;
	printf("enter any string : ");
	gets(str);
	printf("string is %s\n",str);
	int len=0;
	for (i=0;str[i]!='\0';i++)
	{
	 len ++; 
	}
	for (i=0;i<len/2;i++)
	
	{
		if (str[i]=str[len-i-1])
		{
		flag=1;
		break;
		}
	}
	if (flag==1)
	{
		printf(" %s is  a palindrome",&str);	
	}
	
	  else {
		printf(" %s is not a palindrome",&str);
		
			}
	return 0;
}

