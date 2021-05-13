#include<stdio.h>
#include<math.h>

float input;

float cube()
{
float power ;
power = powl(input,3);
printf("%d",power);
}

void main()
{
printf("please enter a number\n");
scanf("%d",&input);
cube(input);
}

//compilation command to include other libraries gcc program.extension -o programname -lm(for mathlibrary)
 
