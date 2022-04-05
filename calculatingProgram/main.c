#include "calculate.h"
#include "print.h"
void main()
{
	CALC_DATA data1;
	data1.value1 = 10;
	data1.value2 = 20;

	add(&data1);
	print(&data1);

	CALC_DATA data2;
	data2.value1 = 30;
	data2.value2 = 40;

	subtract(&data2);
	print(&data2);
}
