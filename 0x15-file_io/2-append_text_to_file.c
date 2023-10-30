#include "main.h"

/**
 * append_text_to_file - text to be appended at end of file
 * @filename: filename
 * @text_content: context to be added
 * Return: 1 if file exists, -1 if file does not exist, or if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int kod;
	int letter_no;
	int jod;

	if (!filename)
		return (-1);

	kod = open(filename, O_WRONLY | O_APPEND);

	if (kod == -1)
		return (-1);

	if (text_content)
	{
		for (letter_no = 0; text_content[letter_no]; letter_no++)
			;

		jod = write(fd, text_content, letter_no);

		if (jod == -1)
			return (-1);
	}

	close(kod);

	return (1);
}
