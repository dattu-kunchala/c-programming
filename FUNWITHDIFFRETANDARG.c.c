#include<stdio.h>

int f3(char x,char y,int z)
{
	z = x+y;
	printf("%d",z);
}

void main()
{
	f3('A','B',0);
}
