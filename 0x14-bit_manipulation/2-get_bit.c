#include "main.h"

int get_bit(unsigned long int y, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (y >> index) & 1;


	return (bit_val);
}

