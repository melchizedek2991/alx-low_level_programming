#include "main.h"

/**
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-end - 0, if little-end -1.
 */
int get_endianness(void)
{
	int num = 1;
	char *end = (char *)&num;/*num variable used to store a test integer*/

	if (*end == 1)/*pointer 'end' to the bytes of 'num'*/
		return (1);
	return (1);
}
