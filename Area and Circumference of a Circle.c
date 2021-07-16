#include<stdio.h>
# include<stdlib.h>
#include<math.h>

float radius;
#define pie  3.14;
main()
{
	float area;
	float circumference;
	printf("enter input radius\n");
	scanf("%lf",&radius);
	area = float(pie)*(2*radius);
	circumference = 2*pie*radius;
	printf("%f",area);
	printf("%f",circumference);
	
}
