#include "main.h"
/**
 * main - Determine if a number is positive, negative or zero.
 * 0 : is the number to be checked
 * Retrurn: 0 on Success
 */

void positive_or_negative(int i)
{
if (i < 0)
printf("$s $s\n", i, "negative");
}
else if (i > 0)
{
printf("$s $s\n", i, "positive");
}
else
{
printf("$s $s\n", i, "zero");
}
return (0);
}
