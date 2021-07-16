#include<stdio.h>
main()
{
	unsigned short int a = 10;
	signed int i= 100;
	unsigned long int l= 65537;
	
	printf("%u\n",a);
	printf("size of a =%d\n",sizeof(a));
	
	printf("%d\n",i);
	printf("size of i =%d\n",sizeof(i));
	
	printf("%u\n",i);
	printf("size of i =%u\n",sizeof(i));
	
	printf("%u\n",l);
	printf("size of l =%d\n",sizeof(l));
}
