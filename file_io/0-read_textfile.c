#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t br, bw;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	br = read(f, buffer, letters);
	if (br == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	bw = write(STDOUT_FILENO, buffer, br);
	if (bw == -1 || bw != br)
	{
		free(buffer);
		close(f);
		return (0);
	}
	free(buffer);
	close(f);
	return (bw);
}
