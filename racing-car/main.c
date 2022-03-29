#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct
{
	char name[10];
	int number;
	int success;
} Car;

void find(char *search, char string[50], int *index)
{
	search = strchr(string, ',');
	while (search != NULL)
	{	
		search = strchr(search + 1, ',');
		*index = *index + 1;
	}
}

void go(int value, Car *car)
{
	if (value >= 4)
	{
		car -> success ++;
	}
}

void main()
{	
	char names[50];
	char *winners = malloc(sizeof(char) * 50);
	char *search;
	char *cutting;
	int num;
	int times;
	int index = 0;
	int carindex = 0;
	int randomvalue;
	Car *car;

	printf("Enter cars name. \n (But, cars name is seperated by semicolon(,).) \n");
	scanf("%s", names);
	printf("How many times are you going to move the cars? \n");
	scanf("%d", &times);
	
	find(search, names, &index);
	num = index + 1;
	index = 0;

	Car *cars = malloc(sizeof(Car) * num);
	char *hyphens = malloc(sizeof(char) * times);

	cutting = strtok(names, ",");
	while (cutting != NULL)
	{	
		strcpy(cars[index].name, cutting);	
		cars[index].number = index + 1;
		cutting = strtok(NULL, ",");
		index ++;
	}
	
	index = 0;
	srand(time(NULL));
	while (index < times)
	{			
		car = &cars[carindex];
		printf("\n%s : ", car -> name);
		randomvalue = rand() % 10 + 1;
		go(randomvalue, car);
		memset(hyphens, 0, times);
		memset(hyphens, '-', car -> success);
		printf("%s", hyphens);

		carindex ++;
		if (carindex == num)
		{
			printf("\n");
			carindex = 0;
			index ++;
		}		
	}
	
	int maxValue = 0;
	carindex = 0;
	while (carindex < num)
	{
		car = &cars[carindex];
		if (car -> success == maxValue)
		{
			strcat(winners, ", ");
			strcat(winners, car -> name);
		}
		if (car -> success > maxValue)
		{
			maxValue = car -> success;
			memset(winners, 0, 50);
			strcat(winners, car -> name);	
		}
		carindex ++;
	}

	index = 0;
	find(search, winners, &index);

	printf("\n\n Congratulations! ");	
	if (index == 0)
	{
		printf("Winner is %s\n", winners);
	}
	else
	{
		printf("Winners are %s\n", winners);
	}

	free(cars);
	free(hyphens);
	free(winners);
}
