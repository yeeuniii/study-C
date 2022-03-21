#include <stdio.h>
#include <stdlib.h>
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

	while (i <= num)
	{
		cars[i].number = i;
		printf("%s%d \n", "Car number : ", cars[i].number);
		i ++;
	}
	
	free(cars);
}
