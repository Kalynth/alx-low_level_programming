#include "main.h"
/**
 * create_file - create a file
 * @filename: filename
 * @text_content: context to be included
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int kod;
	int letter_no;
	int jod;

	if (!filename)
		return (-1);

	kod = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (kod == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter_no = 0; text_content[letter_no]; letter_no++)
		;

	jod = write(kod, text_content, letter_no);

	if (jod == -1)
		return (-1);

	close(kod);

	return (1);
}
