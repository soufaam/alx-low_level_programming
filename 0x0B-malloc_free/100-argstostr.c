#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* _strlen -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int _strlen(char *s)
{
	int t = 0, len = 0;

	while (*(s + t) != '\0')
	{
		len = len + 1;
		t++;
	}
	return (len);
}


/**
* argstostr -  Entrypoint
* Description: 'the program's description argstp str
* @ac : 1 param
* @av: 2 param
*  Return: Always 0 (Success)
*/
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, len = 0;
	char *str;

	if (ac <= 1 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		len = len + _strlen(av[i]) + 1;
	}
	str = malloc(len * sizeof(char));
	if (str)
	{
		i = 1;
		while (i < ac)
		{
			while (av[i][j] != '\0')
			{
				*(str + k) = av[i][j];
				j++;
				k++;
			}
			*(str + k) = '\n';
			j = 0;
			i++;
			k++;
		}
		*(str + k) = '\0';
		return (str);
	}
	free(str);
	return (NULL);
}
