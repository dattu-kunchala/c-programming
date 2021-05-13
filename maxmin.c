//Maximum and minimum between two numbers using functions.

#include<stdio.h>
#include<stdlib.h>
int num1,num2;
int max(x,y)
{
if(num1>num2)
{
printf("num1is greater and the difference beteween them is %d ",num1-num2);
}
}


int min(x,y)
{
if(num2>num1)
{
printf("num2is greater and the difference beteween them is %d ",num2-num1);
}
}

void main()
{
printf("enter two numbers for comparision");
scanf("%d%d",&num1,&num2);
max(num1,num2);
min(num1,num2);
}

