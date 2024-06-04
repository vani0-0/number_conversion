/*
	NUMBER CONVERTER ENTRY
	AUTHOR: VAN VINCENT B. VASQUEZ
	DATE: JUNE 4, 2024
*/

#include "num_converter.h"
#include <stdio.h>

int main()
{
	int num_input;
	printf("Enter decimal: ");
	scanf("%d", &num_input);
	printf("**** **** RESULT **** ****\n");
	printf("| Binary:      |%16s|\n", convert(num_input, BINARY));
	printf("| Octal:       |%16s|\n", convert(num_input, OCTAL));
	printf("| Hexadecimal: |%16s|\n", convert(num_input, HEXADECIMAL));
	return 0;
}
