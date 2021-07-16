#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//int Number_Of_Hats=10,Counter=15;

main()
{
char x_coord;
float y_coord;
another(x_coord=15,y_coord=20);
}

	
	
another(x_coord,y_coord)
{
	/*printf("no of hats:%d\n",sizeof(Number_Of_Hats));
	printf("counter:%d\n",sizeof(Counter));
	printf("noofhats's value'::%d\n",Number_Of_Hats);
	printf("counter's value:%d\n",Counter);
	printf("&of no of hats:%d\n",&Number_Of_Hats);
	printf("&counter:%d\n",&Counter);
	int z = Number_Of_Hats+Counter;
	printf("z:%d\n",z);
	*/
	printf("x:%d\n",sizeof(x_coord));
	printf("y:%d\n",sizeof(y_coord));
	printf("&of x:%d\n",&x_coord);
	printf("&of y:%d\n",&y_coord);
	float c = x_coord+y_coord;
	printf("c:%d\n",c);
	
}


