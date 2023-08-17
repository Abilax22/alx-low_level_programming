#include "main.h"

/**
 * main - Determine if a number is positive, negative or zero.
 * 0 : is the number to be checked
 * Retrurn: 0 on Success
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%dd is positive\n", i);
}
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
}
