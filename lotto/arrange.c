#include <stdio.h>
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

void arrange_ascending(int numbers[])
{
	int min;
	int order;
	int index;
	int ordered_numbers[6];

	index = 0;
	min = 46;
	while (index < 6)
	{
		order = get_order(numbers, index);
		ordered_numbers[order] = numbers[index];
		index ++;
	}
	show_lotto(ordered_numbers);
}

void main()
{
	int lotto[6] = {20, 30, 25, 4, 5, 7};
	int num;
	int index = 0;
	
	arrange_ascending(lotto);
}
