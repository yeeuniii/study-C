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

void arrange_ascending(int numbers[])
{
	int min;
	int index;
	int round;
	int sorting[6];

	min = 46;
	index = 0;
	round = 0;

	while (round < 6)
	{
		if (numbers[round] < min || round == 0)
		{
			min = numbers[round];
			sorting[0] = min;
		}
		else if (numbers[round] == min)
		{
			sorting[index + 1] = *(numbers + index);
			index ++;
		}
		else
		{
			index = round;
			sorting[index] = numbers[round];
		}
		if (index == round)
		{
			printf("end %d :\n", round);
			index = 0;
			round ++;
			show_lotto(sorting);
		}
	}
}

void main()
{
	int numbers[6] = {20, 30, 10, 4, 5, 7};
	
	arrange_ascending(numbers);
	show_lotto(numbers);
}
