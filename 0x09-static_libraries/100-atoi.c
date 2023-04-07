#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _atoi -  Entrypoint
* Description: 'the program's description _atoi
* @str : 1 param
*  Return: Always 0 (Success)
*/

int _atoi(char *str)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;
	while (('-' == (*str)) || ((*str) == '+'))
	{
		if (*str == '-')
			puiss = puiss * -1;
		str++;
	}
	while(*str != '\0')
		while ((*str >= '0') && (*str <= '9'))
	{	
			result = (result * 10) + ((*str) - '0');
			str++;
			if (*(str + 1) < '0' || *(str + 1) > '9' || *(str + 1) == '\0')
				break;
	}
	return (result * puiss);
}
