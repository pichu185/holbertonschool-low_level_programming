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
	ssize_t reading = 0;
	ssize_t writing = 0;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	reading = read(fd, buff, letters);
	if (reading != -1)
	{
		writing = write(STDOUT_FILENO, buff, reading);
		if (writing == -1)
		{
			free(buff);
			return (0);
		}
	}
	free(buff);
	close(fd);
	return (reading);
}
