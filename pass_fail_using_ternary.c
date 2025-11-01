// conditional operator			? :
#include <stdio.h>
void main()
{
	int marks;
	printf("enter the marks(out of 100): ");
	scanf("%d",&marks);
	//(marks >= 35) ? printf("PASS") : printf("FAIL");
	(marks < 35) ? printf("FAIL") : printf("PASS");
	printf("\n %s",(marks>=35)?"PASS":"FAIL");
}
