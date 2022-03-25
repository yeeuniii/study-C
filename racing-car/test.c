#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	int i = 0;

	srand(time(NULL));
	while (i < 3)
	{
		printf("random number : %d \n", rand() % 10 + 1);
		i ++;
	}
}
