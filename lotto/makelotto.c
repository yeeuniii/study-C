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

int get_order(int array[], int index)
{
	int target;
	int num;
	int order;

	target = array[index];
	num = 0;
	order = 0;
	while (num < 6)
	{
		if (target > array[num])	
		{
			order ++;
		}
		num ++;
	}

	return order;	
}

int *arrange_ascending(int numbers[])
{
	int min;
	int order;
	int index;
	static int ordered_numbers[6];

	index = 0;
	min = 46;
	while (index < 6)
	{
		order = get_order(numbers, index);
		ordered_numbers[order] = numbers[index];
		index ++;
	}
	
	return ordered_numbers;
}

void show_lotto(int lotto[])
{
	int num;

	num = 0;
	while (num < 6)
	{
		printf("%d\t", lotto[num]);
		num ++;
	}
	printf("\n");
}

void make_lotto()
{
	int lotto[6];
	int *ordered_lotto;
	int value;
	int number;

	number = 0;
	while (number < 6)
	{
		value = pick_number();
		check_overlap(number, &value, lotto);
		lotto[number] = value;
		number ++;
	}
	show_lotto(lotto);
	ordered_lotto = arrange_ascending(lotto);
	show_lotto(ordered_lotto);
}
