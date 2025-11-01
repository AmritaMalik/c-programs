// Logical operators		&& (and)	  || (or)		! (not)
#include <stdio.h>
void main()
{
	int x=7, y=5, z=9;
	printf("\n x value is %d, y value is %d, z value is %d",x,y,z);
	printf("\n %d",(x>y && x>z));  
	printf("\n %d",(x>y || x>z));  
	printf("\n %d",(x>y && y<z));  
	printf("\n %d",(x>8 || y>8 || z>8));  
	printf("\n %d",(x>8 && y>8 && z>8));  
	printf("\n %d",x>8 && (y>8 || z>8));  // In && and || combination, && takes priority
// When && and || operators are given in combination then && will take the higher
//  priority. to change the priority we have to use ( )
}
