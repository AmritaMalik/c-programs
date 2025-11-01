// conditional operator			? :
#include <stdio.h>
void main()
{
	int rate, qty, amount;
	printf("enter the quantity (in kgs): ");
	scanf("%d",&qty);
	rate = (qty<4) ? 40 : 30;		// 	rate = (qty>=4) ? 30 : 40
	amount=rate*qty;
	printf("Rate is %d and Amount is %d",rate, amount);
}
