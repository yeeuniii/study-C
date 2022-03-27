#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
typedef struct
{
	char name[5];
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

int findMax(char *str)
{
	int len;
	int maxlen = 0;
	len = strlen(str)
	if (len > maxlen)
	{
		maxlen = len
	}	
	return maxlen
}

void main()
{	
	char names[20];
	char *search;
	char *cutting;
	int num;
	int times;
	int index = 0;
	int carindex = 0;
	int randomvalue;

	printf("Enter cars name. \n (But, cars name is seperated by semicolon(,).) \n");
	scanf("%s", names);
	printf("How many times are you going to move the cars? \n");
	scanf("%d", &times);
	
	search = strchr(names, ',');
	while (search != NULL)
	{	
		search = strchr(search + 1, ',');
		index ++;
	}
	
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
		printf("%s : ", cars[carindex].name);
		randomvalue = rand() % 10 + 1;
		go(randomvalue, &cars[carindex]);
		memset(hyphens, 0, times);
		memset(hyphens, '-', cars[carindex].success);
		printf("%s \n", hyphens);

		carindex ++;
		if (carindex == num)
		{
			printf("\n");
			carindex = 0;
			index ++;
		}		
	}

	free(cars);
	free(hyphens);
}
