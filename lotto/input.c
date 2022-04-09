#include <stdio.h>
void input()
{	
	int time;
	int type;

	printf("How many lotto you want?\n");
	scanf("%d", &time);
	printf("What way do you want, either auto or manual?\n (If you want auto, input 0. Or not, input 1)\n");
	scanf("%d", &type);
}
