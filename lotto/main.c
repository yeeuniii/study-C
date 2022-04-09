#include <stdlib.h>
#include <time.h>
#include "input.h"
#include "makelotto.h"
void main()
{
	input();
		
	srand(time(NULL));
	make_lotto();
}
