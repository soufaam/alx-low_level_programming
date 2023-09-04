#include "main.h"

/**
* _strlen -  function
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
* exitprint -  function
* Description: 'the program's description _strlen
* @fd : 1 param
*  Return: Always 0 (Success)
*/

void exitprint(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
* write_buff - function
* Description: 'the program's description _strlen
* @d_fd: 1 param
* @s_fd: 2 param
* @dfilename: 3 param
*  Return: Always 0 (Success)
*/

void write_buff(ssize_t d_fd, ssize_t s_fd, char *dfilename)
{
	ssize_t w_fd, r_fd;
	char *text_content = NULL;

	text_content = malloc(sizeof(char) * 1024);
	r_fd = read(s_fd, text_content, 1024);
	while (r_fd > 0)
	{
		text_content[r_fd] = '\0';
		w_fd = write(d_fd, text_content, _strlen(text_content));
		if (w_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dfilename);
			exit(99);
		}
		if (w_fd < r_fd)
			write(d_fd, text_content + w_fd, _strlen(text_content + w_fd));
		r_fd = read(s_fd, text_content, 1024);
	}
	free(text_content);
}

/**
* cp_file_to_file -  function
* Description: 'the program's description _strlen
* @sfilename: 1 param
* @dfilename: 2 param2
*  Return: Always 0 (Success)
*/

void cp_file_to_file(const char *sfilename, char *dfilename)
{
	ssize_t s_fd, d_fd, c_fd;

	if (!sfilename || !dfilename)
		exit(97);
	s_fd = open(sfilename, O_RDONLY);
	if (s_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", sfilename);
		exit(98);
	}
	d_fd = open(dfilename, O_TRUNC | O_WRONLY);
	if (d_fd == -1)
	{
		c_fd = creat(dfilename, 0664);
		if (c_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dfilename);
			exit(99);
		}
		if (close(c_fd) == -1)
			exitprint(c_fd);
	}
	d_fd = open(dfilename, O_TRUNC | O_WRONLY);
	write_buff(d_fd, s_fd, dfilename);
	if (close(d_fd) == -1)
		exitprint(d_fd);
	if (close(s_fd) == -1)
		exitprint(s_fd);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file_to_file(av[1], av[2]);
	return (0);
}
