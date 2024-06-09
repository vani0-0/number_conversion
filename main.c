/*
	NUMBER CONVERTER ENTRY
	AUTHOR: VAN VINCENT B. VASQUEZ
	DATE: JUNE 4, 2024
*/

#include "num_converter.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num_input;
	printf("Enter decimal: ");
	scanf("%d", &num_input);

	char *binary = convert(num_input, BINARY);
	char *octal = convert(num_input, OCTAL);
	char *hexadecimal = convert(num_input, HEXADECIMAL);

	printf("\033[32m*** **** *** \033[31mRESULT \033[32m*** **** ***\033[0m \n");
	printf("| Binary:      |\033[33m%16s\033[0m|\n", binary);
	printf("| Octal:       |\033[33m%16s\033[0m|\n", octal);
	printf("| Hexadecimal: |\033[33m%16s\033[0m|\n", hexadecimal);

	free(binary);
	free(octal);
	free(hexadecimal);
	return 0;
}
