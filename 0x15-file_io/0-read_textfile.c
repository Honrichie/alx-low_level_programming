#include "main.h"
/**
 * Read_text file - set a function that reads a text file and
 * printsit to the POSIX standard output.
 *
 * @filename - filename(string pointer)
 * @letters - number of letters to be printed
 * Return - number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buff;

	if (filename is == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(size of(char) * letters);
	if (!buff)
		return (0);
	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(fd);
	free(buff);

	return (nwr);
}
