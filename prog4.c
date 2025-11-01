// program to accept 2 value print them before and after swapping (interchanging)
// using a 3rd variable    OR    without using a 3rd variable
#include <stdio.h>
void main()
{
	int num1, num2, temp;
	printf("Enter two value ");
	scanf("%d%d",&num1,&num2);
	printf("before swapping num1=%d, num2=%d",num1,num2);
//	temp=num1;	//	temp = num2;
//	num1=num2;	//	num2 = num1;
//	num2=temp;	//	num1 = temp;
	// swapping without using a 3rd variable
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("after swapping num1=%d, num2=%d",num1,num2);
}
