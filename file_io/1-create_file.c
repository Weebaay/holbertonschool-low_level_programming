#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created, written, etc.)
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bw;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != 	NULL)
	{
		while(text_content[len])
		{
			len++;
		}
		bw = write(f, text_content, len);
		if (bw == -1 || (size_t)bw != len)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}