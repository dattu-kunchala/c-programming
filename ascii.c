#include<stdio.h>
#include<stdlib.h>
char input;

char ascii()
{
printf("%c = %d in ascii value format",input,input);
}

void main()
{
printf("enter one character\n");
scanf("%c",&input);
ascii(input);
}



