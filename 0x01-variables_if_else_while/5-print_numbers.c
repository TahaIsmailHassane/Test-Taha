#include <stdio.h>

/**
 *main- all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 *return:0
 */

int main(void)
{
	int i=0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return 0;
}
