#include<stdio.h>
main()
{
	short int a;
	signed char c;
	printf("enter one number\n");
	scanf("%d",&a);
	
	while(a)
	{
		printf("incremented input  %u\n",a);
	    sleep(1);
	    c = a;
	    while(c)
	    {
	    	printf("equivqlent char = %c in inner loop\n",c);
	    	sleep(1);
	    	break;
	    }
	    ++a;
    }
}
