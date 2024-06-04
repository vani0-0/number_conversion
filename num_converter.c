#include "num_converter.h"

#include <stdlib.h>
#include <string.h>

#define MAX 128

// Check if STRNREV is defined from "string.h"
#ifndef strnrev
// Reverse's string
char *strnrev(char *str, const int len)
{
	char *start = str;
	char *end = str + len - 1;

	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	return str;
}
#endif // strnrev

// Convert remainder to ASCII character
char remainderConvert(const int num)
{
	// Convert remainder to ASCII character, using '0' to '9' for numbers 0 to 9,
	// and 'A' to 'F' for numbers 10 to 15.
	return num < 10 ? num + '0' : (num - 10) + 'A';
}

// Convert unsigned integer to a string representation in the specified base
char *_converter(unsigned int num, const int BASE)
{
	// Allocate memory for the buffer to store the converted string
	char *buffer = malloc(sizeof(char) * (MAX + 1));
	if (buffer == NULL)
		return "Mem alloc faild :<";

	// Return 0 if input is 0
	if (num == 0)
		return "0";

	int index = 0;

	// Perform successive division method
	while (num != 0)
	{
		int remainder = num % BASE;
		buffer[index++] = remainderConvert(remainder);
		num /= BASE; // divide by specific base number to convert with
	}
	buffer[index] = '\0';

	// Reverse result
	strnrev(buffer, index);
	return buffer;
}

char *convert(int num, const int BASE)
{
	// Check if input is negative values
	if (num < 0)
		return "Not Available";
	return _converter(num, BASE);
}