#include <stdio.h>
void main()
{
	int arr[] = {1,2,3,4,5};
	int *ptr1;
	int *ptr2;
	int val = 5;

	ptr1 = arr;
	ptr2 = arr + 1;
	++ val;

	printf("%d\n", *ptr1);
	printf("%d\n", *ptr2);
	printf("%d\n", val);
}
