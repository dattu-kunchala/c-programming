#include<stdio.h>

main()
{
	if(10)
	{
		printf("if condition is true \n");
		printf("hello every one \n");
		if(25)
		{
			printf("excueting inner loop of if \n");
		}
		else
		{
			printf("excueting else of  if inner loop\n");
		}
	}
	else
	{
		printf("else block is excueted\n");
		if(0)
		{
			printf("excuetinginner loop of else block \n");
		}
		else
		{
			printf("excueting inner block of else exit block \n");
		}
		
	}
}
