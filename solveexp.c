/*please uncomment the commented lines in order to evaluate the expression if youu have any problem */


#include<stdio.h>
main()
{
	int a=5,b=3,z;
	z = a++ + b--;
	//printf("a=%d,b=%d,z=%d\n",a,b,z);
	z = a-- + b++;
	//printf("a=%d,b=%d,z=%d\n",a,b,z);
	z = ++a + --b;
	//printf("a=%d,b=%d,z=%d\n",a,b,z);
	z = --a + b++; 
	//printf("a=%d,b=%d,z=%d\n",a,b,z);
	z = --a - --b;  
	//printf("a=%d,b=%d,z=%d\n",a,b,z);
	printf("%d",z);
}
