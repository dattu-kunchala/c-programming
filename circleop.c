//Find diameter, circumference and area of a circle using functions

#include<stdio.h>
#define pi 3.14147

float radius;

float diameter()
{
float d;
d = 2*radius;
printf("diameter=%f\n",d);
}


float area()
{
float a;
a = pi *(radius*radius);
printf("areaof circle = %f\n",a);
}

float circ()
{
float circ;
circ = 2*(pi*radius);
printf("circumference of circle = %f\n",circ);
}


void main()
{
printf("enter radius\n");
scanf("%f",&radius);
diameter(radius);
area(radius);
circ(radius);
}

