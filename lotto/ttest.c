#include <stdio.h>
void main()
{
	int lotto[3] = {1,2,3};
	int array[3] = {0,1,2};
	int index = 0;
	int size;

	printf("size of lotto is %ld\n", sizeof(lotto));
	size = sizeof(lotto);
	printf("%d\n", size/4);

	while (index < 3)
	{
		lotto[index] = array[index];
		printf("%d\n", lotto[index]);
		index ++;
	}
}
