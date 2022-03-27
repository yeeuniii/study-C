#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{	
	char *ptr;
	char names[20] = "y, l, e, t";
	
	ptr = strtok(names, ",");
	while (ptr != NULL)
	{
		printf("%s", ptr);
		ptr = strtok(NULL, ",");
	}
		
	
}
