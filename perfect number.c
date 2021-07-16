#include<stdio.h>
main()
{
	int i=1,j=0,n=0;
	printf("enter a numbr to find it is a perfect number or not\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	  	if(n%i==0)
		{
			j =j+i;	
		}
		
	}
	if(i==j)
		{
			printf("%dis a perfect square number\n",j);
		}
	else
	{
		printf("%dis not a perfect square number\n",i);
	}
}
