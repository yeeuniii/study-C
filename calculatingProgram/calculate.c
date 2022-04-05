#include "calculate.h"
void add(CALC_DATA *data)
{
	data -> operator = '+';

	data -> result = data -> value1 + data -> value2;
}

void subtract(CALC_DATA *data)
{
	data -> operator = '-';

	data -> result = data -> value1 - data -> value2;
}
