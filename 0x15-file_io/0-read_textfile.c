#include "main.h"


/**
* read_textfile - ENTRYPOINT
* @filename: first parameter
* @letters: seconde parameter
* Return: 0 success or uint
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
		char *str = NULL;
		ssize_t rd = 0, fd;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters + 1);
	if (str)
	{
		rd = read(fd, str, letters);
		if (rd > 0)
		{
		str[rd] = '\0';
		write(STDOUT_FILENO, str, letters);
		free(str);
		}
		else
			return (0);
		close(fd);
	}
	return (rd);
}
