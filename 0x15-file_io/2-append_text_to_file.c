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
* append_text_to_file -  Entrypoint
* Description: 'the program's description _strlen
* @filename: 1 param
* @text_content: 2 param2
*  Return: Always 0 (Success)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wd;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	wd = write(fd, text_content, _strlen(text_content));
	if (wd == -1)
		return (-1);
	close(fd);
	return (1);
}
