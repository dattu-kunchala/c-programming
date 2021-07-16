#include<stdio.h>

int f3(x,y,z)
{
	z = x+y;
	printf("%d",z);
}

void main()
{
	f3(10,25);
}
