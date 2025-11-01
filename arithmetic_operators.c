// Arithmetic operators		+	-	*	/	%
#include <stdio.h>
void main()
{
	int x, y;
	printf("Enter 2 values: ");
	scanf("%d%d",&x,&y);
	printf("\n x value is: %d, y value is: %d",x,y);
	printf("\n the sum is  :  %d",x+y);
	printf("\n difference is: %d",x-y);
	printf("\n product is :   %d",x*y);
	printf("\n quotient is : %d",x/y);
	printf("\n float quotient is  : %f",(x+0.0)/y);   // similarly on denominator
	printf("\n float quotient is  : %f",(x*1.0)/y);
	printf("\n float quotient is :  %f",(float)x/y);  // type casting method
	printf("\n remainder is : %d",x%y);
	printf("\n remainder y%x is: %d",y%x);
// In % operator if 1st operand is smaller than 2nd operand the 1st operand is the ans.
}
