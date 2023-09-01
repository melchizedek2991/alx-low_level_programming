#include "main.h"

/**
 * clear_bit - at a given index clear bit to 0
 * @n: number
 * @index: index in binary number
 * Return: 1 if executed, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);

	*n = *n & num;

	return (1);

}
