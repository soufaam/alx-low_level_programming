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
* create_file - ENTRYPOINT
* @filename: first parameter
* @text_content: seconde parameter
* Return: 0 success or uint
*/

int create_file(const char *filename, char *text_content)
{
	int fd, rd, wd;

	if (!filename)
		return (-1);
	fd = open(filename, O_TRUNC | O_WRONLY);
	if (fd == -1)
	{
		rd = creat(filename, 0600);
		if (rd < 0)
		{
			return (-1);
		}
		if (!text_content)
			return (1);
		wd = write(rd, text_content, _strlen(text_content));
		if (wd == -1)
		{
			return (-1);
		}
		else
			return (1);
	}
	wd = write(fd, text_content, _strlen(text_content));
	if (wd == -1)
		return (-1);
	close(fd);
	return (1);
}
