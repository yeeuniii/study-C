#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
	char name[5];
	int number;
	int success;
} Car;

void find(char *search, char string[50], int *index)
{
	printf("\n");
	search = strchr(string, ',');
	while (search != NULL)
	{	
		printf("%s\n", search);
		search = strchr(search + 1, ',');
		*index ++;
	}
	printf("%d\n", *index);
}

void main()
{	
	char *search;
	char names[20];
	int index = 0;

	printf("Enter names  ");
	scanf("%s", names);
	
	find(search, names, &index);
	printf("%d\n", index);

}
