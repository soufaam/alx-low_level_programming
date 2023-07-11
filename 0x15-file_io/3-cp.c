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
* exitprint -  Entrypoint
* Description: 'the program's description _strlen
* @fd : 1 param
*  Return: Always 0 (Success)
*/

void exitprint(int fd)
{
	if (fd)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
* cp_file_to_file -  Entrypoint
* Description: 'the program's description _strlen
* @sfilename: 1 param
* @dfilename: 2 param2
*  Return: Always 0 (Success)
*/

void cp_file_to_file(const char *sfilename, char *dfilename)
{
	int fd1, fd2, wd2, cd2, rd1;
	char *text_content = NULL;

	if (!sfilename || !dfilename)
		exit(97);
	fd1 = open(sfilename, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s", sfilename);
		exit(98);
	}
	text_content = malloc(1024 * sizeof(char));
	fd2 = open(dfilename, O_TRUNC | O_RDWR);
	if (fd2 == -1)
	{
		cd2 = creat(dfilename, 0664);
		if (cd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s", dfilename);
			exit(99);
			exitprint(close(cd2));
		}
	}
	fd2 = open(dfilename, O_APPEND | O_RDWR);
	rd1 = read(fd1, text_content, 1024);
	while (rd1 > 0)
	{
		rd1 = read(fd1, text_content, 1024);
		text_content[1024] = '\0';
		wd2 = write(fd2, text_content, _strlen(text_content));
		if (wd2 == -1)
		{
			dprintf(2, "Error: Can't write to %s", dfilename);
			exit(99);
		}
	}
	free(text_content);
	exitprint(close(fd1));
	exitprint(close(fd2));
}

/**
 * main - check the code
 *@ac: 1 param
 *@av: param 2
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	cp_file_to_file(av[1], av[2]);
	return (0);
}
