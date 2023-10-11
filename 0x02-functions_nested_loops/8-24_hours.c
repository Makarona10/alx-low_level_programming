#include "main.h"

/**
 * jack_bauer - Function Prints every minute of the day
 *
 * Return:  always 0
 */




void jack_bauer(void)
{
	char time[] = "00:00";

	int a, b, c, d, x;

	for (a = 0; a <= 2; ++a)
	{
		time[0] = a + '0';

		for (b = 0; b <= 9; ++b)
		{
			if (a == 2 && b == 4)
			{
				break;
			}
			time[1] = b + '0';

			for (c = 0; c <= 5; ++c)
			{
				d = 0;
				time[3] = c + '0';

				for (d = 0; d <= 9; ++d)
				{
					time[4] = d + '0';
					for (x = 0; x <= 4; x++)
					{
						_putchar(time[x]);
					}
					_putchar('\n');
				}
			}
		}
	}
}
