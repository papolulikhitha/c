#include<stdio.h>
int main ()
{
	int n,r,num,rn=0;
	printf("enter a number: ");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		r=num%10;
		rn=(rn*10)+r;
		num=num/10;
	}
if(n==rn){
	printf("%d is a palindrome number",n);
}else{
	printf("%d is not a palindrome number",n);
 }
return 0;
}
