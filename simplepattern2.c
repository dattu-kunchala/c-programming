#include<stdio.h>

main()
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
