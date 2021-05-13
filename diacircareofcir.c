#include<stdio.h>
#include<math.h>

#define pie 3.14159
float radius;

float circle()
{
float area,circumference,diameter;
area = pie *(pow(radius,2.0));
circumference = 2*pie*radius;
diameter = 2*radius;
printf("area: %f \ncircumference: %f\ndiameter: %f\n",area,circumference,diameter);

}

void main()
{
printf("enter radius\n");
scanf("%f",&radius);
circle(radius);
}
