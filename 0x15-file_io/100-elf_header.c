#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * main - displays the information contained in the ELF header at the start
 * of an ELF file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
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
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	n = read(fd, &ehdr, sizeof(ehdr));
	if (n != sizeof(ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file - it has the wrong magic bytes at the start\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (n = 0; n < EI_NIDENT; n++)
		printf("%02x ", ehdr.e_ident[n]);
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              ");
	printf("%s\n", ehdr.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                           %d %s\n",
			ehdr.e_ident[EI_VERSION],
			ehdr.e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            ");
	switch (ehdr.e_ident[EI_OSABI])
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
			printf("<unknown: %x>", ehdr.e_ident[EI_OSABI]);
			break;
	}
	printf("\n");
	printf("  ABI Version:                       %d\n",
			ehdr.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (ehdr.e_type)
	{
		case ET_NONE:
			printf("No file type");
			break;
		case ET_REL:
			printf("Relocatable file");
			break;
		case ET_EXEC:
			printf("Executable file");
			break;
		case ET_DYN:
			printf("Shared object file");
			break;
		case ET_CORE:
			printf("Core file");
			break;
		default:
			printf("<unknown: %x>", ehdr.e_type);
			break;
	}
	printf("\n");
	printf("  Entry point address:               %#lx\n", ehdr.e_entry);

	return (0);
}
