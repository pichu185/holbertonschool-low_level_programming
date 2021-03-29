#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it to the s/o
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t imp = 0;
	ssize_t ret = 0;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename)
	{
		return (0);
	}
	/* obtengo el file descriptor */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	/* leo el archivo */
	imp = read(fd, buff, letters);
	if (imp != -1)
	{
	/* imprimo caracteres leidos usando write */
		ret = write(2, buff, letters);
		if (ret == -1)
		{
			return (-1);
		}
	}
	free(buff);
	close(fd);
	return (imp);
}