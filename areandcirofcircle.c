#include<stdio.h>
# define pie 3.14147
float radius;

float area()
{
float arc;
arc = pie *(radius*radius);
//printf("%f",arc);
return printf("area: %f\n",arc);
}

float circumference()
{
float circ;
circ = 2*pie*radius;
//printf("%f",circ);
return printf("circumference : %f\n",circ);
}

void main()
{
printf("enter input radius\n\a");
scanf("%f",&radius);
area(radius);
circumference(radius);
printf("\a");
}

