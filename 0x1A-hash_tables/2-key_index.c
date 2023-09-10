#include "hash_tables.h"

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
* _strdup -  Entrypoint
* Description: 'the program's description _strdup
* @str : 1 param
*  Return: Always 0 (Success)
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (_strlen(str)) + 1);
	if (s)
	{
		for (; i < _strlen(str); i++)
		{
			*(s + i) = *(str + i);
		}
	return (s);
	}
	free(s);
	return (NULL);
}

/**
* key_index -  function
* Description: 'the program's description key_index
* @key: 1 param
* @size: 2 param
*  Return: Always 0 (Success)
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index = hash_djb2(key);

	return (index % size);
}
