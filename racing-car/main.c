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

void input(char names[], int *times)
{
	printf("Enter cars name. \n (But, cars name is seperated by semicolon(,).) \n");
	scanf("%s", names);
	printf("How many times are you going to move the cars? \n");
	scanf("%d", times);
}

int countChar(char string[], char target)
{
	char *search;
	int index = 0;
	int number;
	
	search = strchr(string, target);
	while (search != NULL)
	{	
		search = strchr(search + 1, target);
		index ++;
	}

	return index + 1; 
}

void split(char names[], Car *cars)
{
	int index = 0;
	char *cutting;
	
	cutting = strtok(names, ",");
	while (cutting != NULL)
	{	
		strcpy(cars[index].name, cutting);	
		cars[index].number = index + 1;
		cutting = strtok(NULL, ",");
		index ++;
	}
}

void go(int value, Car *car)
{
	if (value >= 4)
	{
		car -> success ++;
	}
}

void runRacing(int times, Car cars[], int num)
{
	int index = 0;
	int carindex = 0;
	int randomvalue;
	char *hyphens = malloc(sizeof(char) * times);
	Car *car;

	while (index < times)
	{			
		car = cars + carindex;
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

	free(hyphens);
}

void determineWinners(int num, Car cars[], char winners[])
{
	int maxValue = 0;
	int carindex = 0;
	Car car;

	while (carindex < num)
	{
		car = *(cars + carindex);
		if (car.success == maxValue)
		{
			strcat(winners, ", ");
			strcat(winners, car.name);
		}
		if (car.success > maxValue)
		{
			maxValue = car.success;
			memset(winners, 0, 50);
			strcat(winners, car.name);	
		}
		carindex ++;
	}

}


void printWinners(int num, char winners[50])
{
	printf("\n\n Congratulations! ");	
	if (num == 1)
	{
		printf("Winner is %s\n", winners);
	}
	else
	{
		printf("Winners are %s\n", winners);
	}
}

void main()
{	
	char names[50];
	char *winners = malloc(sizeof(char) * 50);
	int num;
	int times;

	input(names, &times);
	num = countChar(names, ',');

	Car *cars = malloc(sizeof(Car) * num);
	
	split(names, cars);

	srand(time(NULL));
	runRacing(times, cars, num);
	determineWinners(num, cars, winners);

	num = countChar(winners, ',');
	printWinners(num, winners);

	free(cars);
	free(winners);
}
