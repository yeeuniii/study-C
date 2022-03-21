#include <stdio.h>
void main()
{
	int *num1;
	int num2 = 5;

	num1 = &num2;
	*num1 = 10;
	printf("%p \n", num1);
	printf("%d \n", *num1);
	printf("%d \n", num2);
}
