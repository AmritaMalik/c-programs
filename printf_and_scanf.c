// program to work with variables using printf() and scanf() function
#include <stdio.h>
void main()
{
	int sub1, sub2, sub3, tot;
	float avg;
	printf("Enter 3 subject marks ");
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	tot=sub1+sub2+sub3;
	avg=tot/3.0;
	printf("total is %d, average is %.2f",tot,avg);
}
