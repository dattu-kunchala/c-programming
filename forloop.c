#include<stdio.h>
main()
{
	unsigned short int i;
	int n;
	signed long int sum=0;
	printf("enter the max number you want to find sum of :");
	scanf("%u",&n);
	for(i=0;i<=n;i++)
	{
		printf("sum=%u,i=%d,n=%u\n",sum,i,n);
		sum = sum+i;
		/*
		printf("size of i =%u\n",sizeof(i));
		printf("size of sum =%u\n",sizeof(sum));
		printf("size of n =%u\n",sizeof(n));
		*/
		
	}
	
}
//if i use - symbol at 100 for i ten iam getting no o/p diaplayed on screen with no error /warnings
