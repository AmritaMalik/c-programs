// conditional operator			? :
#include <stdio.h>
void main()
{
	int age1=10, age2=25, diff;
	printf("\n x value is %d, y value is %d",age1,age2);
	diff= (age1>age2) ? age1-age2 : age2-age1;
	printf("age difference is %d",diff);
}
