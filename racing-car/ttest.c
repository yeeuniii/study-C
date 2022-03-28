#include <stdio.h>
void test(int *index, int a, int b)
{
//	*index = a+b;
	printf("%d", *index);
	*index = *index + 1;
	printf("%d", *index);
}

void main()
{
	int index = 0;
	int a = 5;
	int b = 3;

	test(&index, a, b);
	printf("%d\n", index);
}
