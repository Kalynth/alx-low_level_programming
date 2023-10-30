#include "main.h"

/**
 * read_textfile - reads a text file and prints letters
 * @filename: filename
 * @letters: numbers of letters to print
 * Return: numbers of letters printed, if it fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ac;
	ssize_t jod, nwr;
	char *cuf;

	if (!filename)
		return (0);

	ac = open(filename, O_RDONLY);

	if (ac == -1)
		return (0);

	cuf = malloc(sizeof(char) * (letters));
	if (!cuf)
		return (0);

	jod = read(fd, cuf, letters);
	nwr = write(STDOUT_FILENO, cuf, jod);

	close(ac);

	free(cuf);

	return (nwr);
}
