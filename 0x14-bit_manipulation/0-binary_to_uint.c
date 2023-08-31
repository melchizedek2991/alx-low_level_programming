#include "main.h"

/**
* binary_to_uint - conversion of binary number to unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: unsigned int after conversion from binary
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num_value = 0;
	int ind;

	if (!b)
		return (0);

	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind] != '0' && b[ind] != '1')
			return (0);
	}

	for (ind = 0; b[ind] != '\0'; ind++)
	{
		num_value <<= 1;
		if (b[ind] == '1')
		{
			num_value += 1;
		}
	}

	return (num_value);
}
