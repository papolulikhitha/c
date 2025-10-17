//coded by Likhitha
#include<stdio.h>
#include<string.h>
int main ()
{
	int i,alpha=0,upper=0,lower=0,vowel=0,consonant=0,digit=0;
	char s1[100];
	printf("enter any string : ");
	scanf("%[^\n]%*c",s1);
	for (i=0;s1[i]!='\0';i++)
	{
		if ((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z'))
		{
			alpha++;
			switch (s1[i])
			{
				case 'A':
				case 'a':
				case 'E':
				case 'e':
				case 'I':
				case 'i':
				case 'O':
				case 'o':
				case 'U':
				case 'u':	
				vowel++;
				break;
				default : consonant++;
			}
	    }
			if(s1[i]>='A'&&s1[i]<='Z')
			{
				upper++;
			}
			if(s1[i]>='a'&&s1[i]<='z')
			{
				lower++;
			}
			if (s1[i]>='0'&&s1[i]<='9')
			{
				digit ++;
			}
		}
	printf(" no of alphabets are %d\n vowels are %d\n consonants are %d\n uppercase lettes are %d\n lowecase letters are %d\n digits are %d\n",alpha,vowel,consonant,upper,lower,digit);
	printf("24B11CS351");
	return 0;
}
