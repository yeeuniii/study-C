#include <stdio.h>
typedef struct
{
	int number;
} Car;

void main()
{	
	int num;
	int i = 1;
	Car cars[20];

	printf("How many cars? \n");
	scanf("%d", &num);
	while (i <= num)
	{
		cars[i].number = i;
		printf("%s%d \n", "Car number : ", cars[i].number);
		i ++;
	}
}
