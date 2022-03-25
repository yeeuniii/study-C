#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{	
	int num = 10;
	char *dash = malloc(sizeof(char) * num);
	
	memset(dash, '-', sizeof(char) * num);
	printf("%s", dash);
}
