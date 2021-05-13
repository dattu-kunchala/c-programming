#include<stdio.h>

void main()
{
float english,maths,biology,chemistry,physcics,percentage;
printf("enter marks obtained in each subject line by line\n");
scanf("%f%f%f%f%f",&english,&maths,&physcics,&biology,&chemistry);
percentage = (english+maths+physcics+biology+chemistry);

printf("total:%f\n",percentage);
percentage = (percentage)/500;
printf("%f\n",percentage*100);
}
