#include "main.h"

/**
 * flip_bits -a function that returns the number of bits you would need to flip
 * @n:var1
 * @m:var2
 * Return:returns the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int xor = n ^ m;

while (xor)
{
if (xor & 1)
count++;
xor >>= 1;
}

return (count);
}

