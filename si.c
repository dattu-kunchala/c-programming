#include<stdio.h>

void main()
{
float interest,principle,rate;
int time;
printf("enter rate of interest,principle,time\n");
scanf("%f%f%d",&rate,&principle,&time);
interest = (principle*time*rate)/100;
printf("%f",interest);
}

