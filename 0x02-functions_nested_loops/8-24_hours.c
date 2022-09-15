#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints jack bauer time
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
