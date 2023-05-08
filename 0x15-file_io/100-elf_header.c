#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_magic - prints the magic numbers of an ELF header
 * @e_ident: ELF header identifier
 */
void print_magic(unsigned char *e_ident)
{
	ssize_t n;

	printf("Magic:   ");
	for (n = 0; n < EI_NIDENT; n++)
		printf("%02x ", e_ident[n]);
	printf("\n");
}

/**
 * print_class - prints the class of an ELF header
 * @e_ident: ELF header identifier
 */
void print_class(unsigned char *e_ident)
{
	printf("Class:                             ");
	printf("%s\n", e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
}

/**
 * print_data - prints the data encoding of an ELF header
 * @e_ident: ELF header identifier
 */
void print_data(unsigned char *e_ident)
{
	printf("Data:                              ");
	printf("%s\n", e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
}

/**
 * print_version - prints the version of an ELF header
 * @e_ident: ELF header identifier
 */
void print_version(unsigned char *e_ident)
{
	printf("Version:                           ");
	printf("%d%s\n", e_ident[EI_VERSION], e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
}

/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @e_ident: ELF header identifier
 */
void print_osabi(unsigned char *e_ident)
{
	printf("OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		default:
			printf("<unknown: %x>", e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
}

/**
 * print_abiversion - prints the ABI version of an ELF header
 * @e_ident: ELF header identifier
 */
void print_abiversion(unsigned char *e_ident)
{
	printf("ABI Version:                       ");
	printf("%d\n", e_ident[EI_ABIVERSION]);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t n;
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		return (98);
	}
	n = read(fd, &ehdr, sizeof(ehdr));
	if (n != sizeof(ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - %s\n", argv[1]);
		close(fd);
		return (98);
	}
	print_magic(ehdr.e_ident);
	print_class(ehdr.e_ident);
	print_data(ehdr.e_ident);
	print_version(ehdr.e_ident);
	print_osabi(ehdr.e_ident);
	print_abiversion(ehdr.e_ident);
	close(fd);
	return (0);
}
