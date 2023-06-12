#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* calcount -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int calcount(char *s, __attribute__((unused)) int  *t)
{
	int charcount = 0;

	while (*(s + *t) != '\0')
			{
				if ((*(s + *t) == ' ') && (*(s + *t - 1) != ' ') && (*t >= 1))
				{
					return (charcount);
				}
				else if (*(s + *t) != ' ')
					charcount++;				
			*t = 1 + *t;
			}
	return (charcount);
}
/**
* calword -  Entrypoint
* Description: 'the program's description _strlen
* @s : 1 param
*  Return: Always 0 (Success)
*/

int calword(char *s)
{
	int t = 0, wrd = 0;

	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	while (*(s + t) != '\0')
	{
		if (*(s + t) == ' ' && t >= 1)
		{
			if (*(s + t - 1) != ' ')
			{
				wrd++;
			}
		}
		t++;
	}
	if (*(s + t - 1) != ' ')
		wrd++;
	return (wrd);
}

/**
* strtow -  Entrypoint
* Description: 'the program's description _strlen
* @str : 1 param
*  Return: Always 0 (Success)
*/
char **strtow(char *str)
{
	int wordcount, charcount = 0, t = 0;
	int num = 0, i;
	char **allstr = NULL;

	wordcount = calword(str);
	if (wordcount == 0)
		return (NULL);
	allstr = malloc(sizeof(char *) * wordcount);
	if (allstr)
	{
		for (num = 0; num < wordcount; num++)
		{
			if (*(str + t) == '\0')
			{
				return (allstr);
			}
			charcount = calcount(str, &t);
			if (charcount != 0)
			{
				allstr[num] = malloc(sizeof(char) * charcount);
				if (allstr[num] == NULL && num != 0)
				{
					while (num >= 0)
						free(allstr[num--]);
					free(allstr);
					return (NULL);
				}
				for (i = 0; i < charcount; i++)
					allstr[num][i] = *(str + t - charcount + i);
				allstr[num][i] = '\0';
			}
			t++;
		}
		return (allstr);
	}
	return (allstr);
}
