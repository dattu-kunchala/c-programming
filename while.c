#include<stdio.h>
main()
{
	long int a;
	printf("enter one number\n");
	scanf("%d",&a);
	while(a)
	{
		printf(" input %u\n",a);
	    ++a;
	    //sleep(1);
	}
}
