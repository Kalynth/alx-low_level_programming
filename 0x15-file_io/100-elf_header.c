/*
 * File: 100-elf_header.c
 * Auth: Brennan D Baraban
 */

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Checks if file is an elf file
 * @e_ident: points to an array containing the ELF magic number
 * Description: If file is not an ELF file - exit code 98
 */
void check_elf(unsigned char *e_ident)
{
	int idex;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[idex] != 127 &&
		    e_ident[idex] != 'E' &&
		    e_ident[idex] != 'L' &&
		    e_ident[idex] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints  magic numbers of an ELF header file
 * @e_ident: pointer to an array containing the ELF magic digits
 * Description: Magic numbers are separated by spaces
 */
void print_magic(unsigned char *e_ident)
{
	int idex;

	printf("  Magic:   ");

	for (idex = 0; idex < EI_NIDENT; idex++)
	{
		printf("%02x", e_ident[idex]);

		if (idex == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - Prints  class of an ELF header
 * @e_ident: points to an array containing the ELF class
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
