#include<stdio.h>


void main()
{
int number,factorial=1,i=1;
printf("enter a number to find its factoruial\n");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
factorial = (factorial*i);
}
printf("%d",factorial);
}

