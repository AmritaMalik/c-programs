// program to understand the minimum and maximum values of variables
#include <stdio.h>
#include <math.h>
void main()
{
	short int a;  // 2 bytes
	int b;   // 4 bytes
	a = 32770;	//	-32768 to 32767				-9	to  9	
	printf("\n value of a is %d",a);

	b=-2147483653;   // -2147483648 to 2147483647
	printf("\n b value is %d",b);
}
