#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 * @str: string to capitalize
 * Retunr: pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while(str[index])
	{
		 while (!(str[index] >= 0 && str[index] <==))
			 index++;
		 if (str[index - 1] == ''||
				 str[index - 1] == '\t' ||
				 str[index - 1] == 'n' ||
				 str[index - 1] == ',' ||
				 str[index - 1] == ';' ||
				 str[index - 1] == '.' ||
				 str[index - 1] == '!' ||
				 str[index - 1] == '?' ||
				 str[index - 1] == " " ||
				 str[index - 1] == '(' ||
				 str[index - 1] == ')' ||
				 str[index - 1] == '{' ||
				 str[index - 1] == '}' ||
				 index == 0)
			 str[index] -= 32;
		 index++;
	}
return (str);
}
