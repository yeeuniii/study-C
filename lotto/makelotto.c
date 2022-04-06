#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pick_number()
{	
	return rand() % 45 +1;
}

void check_overlap(int number, int *value, int lotto[])
{
	int index;

	index = 0;
	while (index < number)
	{
		if (*value == lotto[index])
		{
			index = 0;
			*value = pick_number();
		}
		else
		{
			index ++;
		}
	}
}

void make_lotto()
{
	int lotto[6];
	int value;
	int number;

	number = 0;
	while (number < 6)
	{
		value = pick_number();
		check_overlap(number, &value, lotto);
		lotto[number] = value;
		printf("%d\n", lotto[number]);
		number ++;

	}
}
