// program to understand the number of bytes of variable of each datatype
#include <stdio.h>
void main()
{
	short int a;
	int b;
	long int c;
	unsigned int d;
	float e;
	double f;
	long double g;
	char h;
	char x[15];
	printf("\n number of bytes in a = %d",sizeof(a));
	printf("\n number of bytes in b = %d",sizeof(b));
	printf("\n number of bytes in c = %d",sizeof(c));
	printf("\n number of bytes in d = %d",sizeof(d));
	printf("\n number of bytes in e = %d",sizeof(e));
	printf("\n number of bytes in f = %d",sizeof(f));
	printf("\n number of bytes in g = %d",sizeof(g));
	printf("\n number of bytes in h = %d",sizeof(h));
	printf("\n number of bytes in x = %d",sizeof(x));
	
	printf("\n\n number of bytes in short int = %d",sizeof(short int));
	printf("\n number of bytes in int = %d",sizeof(int));
	printf("\n number of bytes in long int = %d",sizeof(long int));
	printf("\n number of bytes in unsigned int = %d",sizeof(unsigned int));
	printf("\n number of bytes in float = %d",sizeof(float));
	printf("\n number of bytes in double = %d",sizeof(double));
	printf("\n number of bytes in long double = %d",sizeof(long double));
	printf("\n number of bytes in char = %d",sizeof(char));
	printf("\n number of bytes in char[15] = %d",sizeof(char[15]));
}

