#include<stdio.h>
#include<limits.h>

int min(num1,num2)
{

if(num2>num1)
{
int out;
out = num2-num1;
printf("max: %d\n",out);
printf("min:%d\n",num1-num2);
}

else
{
printf("error\n");
}
return 0;
}

void main()
{
int num1,num2,out;
printf("enter two numbers\n");
scanf("%d%",&num1,&num2);
min(num1,num2);
}
