#include<stdio.h>
int main ()
{
	printf("int requires = %d bytes\n", sizeof (int));
	printf("float requires = %d bytes\n", sizeof (float));
	printf("long long requires = %d bytes\n", sizeof (long long));
	printf("short requires = %d bytes\n", sizeof (short));
	return 0 ; 
}
