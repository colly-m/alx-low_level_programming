#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);

/**
 * check_elf - function to check if a file is an ELF file
 * @e_ident: pointer to an array with the ELF magic numbers
 * Description: If the file is not an ELF file - exit 98
 * Return: void
 */
void check_elf(unsigned char *e_ident)
{
	int ix = 0;

	for (; ix < 4; ix++)
	{
		if (e_ident[ix] != 127 &&
			e_ident[ix] != 'E' &&
			e_ident[ix] != 'L' &&
			e_ident[ix] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void print_magic(unsigned char *e_ident);

/**
 * print_magic - function to print the magic numbers of an ELF header
 * @e_ident: pointer to an array containing the ELF magic numbers
 * Description: Magic numbers to be separated by spaces
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int ix = 0;

	printf(" Magic: ");

	for (; ix < EI_NIDENT; ix++)
	{
		printf("%02x", e_ident[ix]);

		if (ix == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void print_class(unsigned char *e_ident);

/**
 * print_class - function to print the class of an ELF header
 * @e_ident: pointer to array containing the ELF class
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

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

void print_data(unsigned char *e_ident);

/**
 * print_data - function to print the data of an ELF header
 * @e_ident: pointer to array containing the ELF class
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

void print_version(unsigned char *e_ident);

/**
 * print_version - function to print the version of an ELF header
 * @e_ident:  pointer to array containing the ELF version
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version: %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

void print_osabi(unsigned char *e_ident);

/**
 * print_osabi - function to print the OS/ABI of an ELF header
 * @e_ident: pointer to an array containing the ELF version
 * Return: void
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
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
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

void print_abi(unsigned char *e_ident);

/**
 * print_abi - function to print the ABI version of an ELF header
 * @e_ident: pointer to an array with the ELF ABI version
 * Return: void
 */
void print_abi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

void print_type(unsigned int e_type, unsigned char *e_ident);

/**
 * print_type - function to print the type of an ELF header
 * @e_type: ELF type
 * @e_ident: pointer to an array with the ELF class
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident);

/**
 * print_entry - function to print the entry point of an ELF header
 * @e_entry: address of the ELF entry point
 * @e_ident: pointer to an array containing the ELF class
 * Return: void
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

void close_elf(int elf);

/**
 * close_elf - function to closes an ELF file
 * @elf: the fd of the ELF file
 * Description: If file cannot be closed - exit 98
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - function to displays the information inside the ELF header
 * at the start of an ELF file
 * @argc: number of arguments supplied to the program
 * @argv: pointer vector to the arguments
 * Description: If file is not an ELF File or
 * function fails - exit 98
 * Return: 0 success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *h;
	int op, rd;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	h = malloc(sizeof(Elf64_Ehdr));
	if (h == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, h, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(h);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(h->e_ident);
	printf("ELF Header:\n");
	print_magic(h->e_ident);
	print_class(h->e_ident);
	print_data(h->e_ident);
	print_version(h->e_ident);
	print_osabi(h->e_ident);
	print_abi(h->e_ident);
	print_type(h->e_type, h->e_ident);
	print_entry(h->e_entry, h->e_ident);

	free(h);
	close_elf(op);
	return (0);
}
