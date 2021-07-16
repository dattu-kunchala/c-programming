#include<stdio.h>
#include<conio.h>
main()
{
	float a = 10.235;
	double i= 100.3245876;
	long double l= 65.3458769245;
	
	
	printf("%f\n",a);
	printf("size of a =%d\n",sizeof(a));
	
	printf("%lf\n",i);
	printf("size of i =%d\n",sizeof(i));
	
	printf("%lf\n",i);
	printf("size of i =%u\n",sizeof(i));
	
	printf("%u\n",l);
	printf("size of l =%d\n",sizeof(l));
	
}
