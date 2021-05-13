//Check whether a number is even or odd using functions
#include<stdio.h>
#include<stdlib.h>
int input;

int evenodd()
{
if(input %2 ==0)
{
printf("%d is even \n", input);
}
else
{
printf("%d is odd \n",input);
}

}

void main()
{
printf("enter one number \n");
scanf("%d",&input);
evenodd(input);
}


