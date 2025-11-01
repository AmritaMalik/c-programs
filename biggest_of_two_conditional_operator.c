// conditional operator			? :    print the biggest of 2 values 
#include <stdio.h>
void main()
{
	int num1, num2;
	printf("enter 2 values : ");
	scanf("%d%d",&num1,&num2);
	printf("\n %d",(num1>num2)?num1:num2);
}
