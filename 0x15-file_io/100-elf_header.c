#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

void print_elf_header(char* filename) {
	int fd = open(filename, O_RDONLY);
	if (fd == -1) {
		print_error("Failed to open file");
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header)) {
		print_error("Failed to read ELF header");
	}

	// Check if the file is an ELF file
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
		print_error("File is not an ELF file");
	}

	// Print ELF header information
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");
	printf("Class: %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data: %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	switch (header.e_ident[EI_OSABI]) {
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);

	printf("Type: ");
	switch (header.e_type) {
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}

	printf("Entry point address: 0x%lx\n", header.e_entry);

	close(fd);
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		print_error("Invalid arguments");
	}

	print_elf_header(argv[1]);

	return 0;
}

