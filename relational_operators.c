// Relational operators		>	<	==	>=	<=	!=
#include <stdio.h>
void main()
{
	int x, y;
	printf("Enter 2 values: ");
	scanf("%d%d",&x,&y);
	printf("\n x value is %d, y value is %d",x,y);
	printf("\n X > Y is    %d",x>y);  
	printf("\n X < Y is    %d",x<y);       
	printf("\n X == Y is   %d",x==y);      
	printf("\n X >= Y is   %d",x>=y);
	printf("\n X <= Y is   %d",x<=y);
	printf("\n X != Y is   %d",x!=y);
	printf("\n X+Y > 10 is %d",x+y>10);  // expression can be compared with a value
}
