#include <stdio.h>
#include "print.h"
void print(CALC_DATA *data)
{
	printf("%d %c %d = %d\n",
		data -> value1,
		data -> operator,
		data -> value2,
		data -> result);
}
