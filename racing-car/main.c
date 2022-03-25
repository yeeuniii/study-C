#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct
{
	int number;
	int success;
} Car;

void go(int value, Car *car)
{
	if (value >= 4)
	{
		car -> success ++;
	}
}

void main()
{	
	char names;
	int num;
	int times;
	int i = 0;
	int j = 0;
	int randomvalue;

//	printf("Enter cars name. \n (But, cars name is seperated by semicolon(,)) \n");
//	scanf("%s", &names);
	printf("Enter number.");
	scanf("%d", &num);
	printf("How many times are you going to move the cars? \n");
	scanf("%d", &times);

	Car *cars = malloc(sizeof(Car) * num);
	char *hyphens = malloc(sizeof(char) * times);
	while (i <= num)
	{	
		cars[i].number = i + 1;
		i ++;
	}
	
	i = 0;
	srand(time(NULL));
	while (i < times)
	{			
		printf("%s%d ", "Car number : ", cars[j].number);
		randomvalue = rand() % 10 + 1;
		go(randomvalue, &cars[j]);
		printf("## %d ##", randomvalue);
		printf("%d \n", cars[j].success);
		memset(hyphens, 0, times);
		memset(hyphens, '-', cars[j].success);
		printf("%s \n", hyphens);

		j ++;
		if (j == num)
		{
			printf("\n");
			j = 0;
			i ++;
		}		
	}

	free(cars);
	free(hyphens);
}
