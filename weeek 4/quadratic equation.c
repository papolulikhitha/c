#include<stdio.h>
#include <math.h>
int main ()
{
int a,b,c,d;
float r1,r2;
 printf("enter a,b,c values ");
 scanf("%d,%d,%d",&a,&b,&c);
 d=b*b-4*a*c;
    if(d==0)
	  {
	 	 printf("roots are real and equal\n ");
	     r1=r2=(-b)/(2*a);
	     printf("root 1 = %.2f , root 2 = %.2f",r1,r2);
	  }
  else if (d>0)
	 {	 printf("roots are real and distinct \n");
	 	 r1=(-b+sqrt(d))/(2*a);
	 	 r1=(-b-sqrt(d))/(2*a);
	 	 printf("root 1 = %.2f , root 2 = %.2f",r1,r2); 	
	 }
  else 
     {
     	printf("\n roots are imaginary");
     }	 
 return 0;
}
