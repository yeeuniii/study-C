#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
	int number;
} Car;



void main()
{	
	int num;
	int i = 1;

	printf("How many cars? \n");
	scanf("%d", &num);
	
	Car *cars = malloc(sizeof(Car) * num);
	
	srand(time(NULL));
	while (i <= num)
	{	
		cars[i].number = i;
		printf("%s%d ", "Car number : ", cars[i].number);
		
		if ((rand() % 10 + 1) >= 4)
		{
			printf("%c \n", '-');
		}
		else
		{
			printf("\n");
		}		
		i ++;
	}
	
	free(cars);
}
