// assignment operators		=	+=	-=	*=	/=	%=
#include <stdio.h>
void main()
{
	int x=10;
	printf("\n x value is %d",x);	// 	10
	x+=8;	//	x=x+8;	// self increment statement
	printf("\n x value is %d",x);	// 	18
	x-=8;	//	x=x-8;
	printf("\n x value is %d",x);	//	10
	x*=3;	//	x=x*3;
	printf("\n x value is %d",x);	//	30
	x/=4;	//	x=x/4;
	printf("\n x value is %d",x);	//	7	
	x%=2;	// 	x=x%2;
	printf("\n x value is %d",x);	//	1
}
