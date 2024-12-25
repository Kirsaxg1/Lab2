#include <stdlib.h>
#include <stdio.h>

char* correct(int first, int last)
{
	if (first < 2 || last > 36)
	{
		puts("error");
		return 0;
	}


	const char* symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char buffer[100];
	char* ptr = &buffer[sizeof(buffer) - 1];
	*ptr = '\0';

	int negativ = (first < 0 && last == 10);
	if (negativ)
	{
		first = -first;
	}

	do
	{
		*--ptr = symbols[first % last];
		first /= last;
	} while (first != 0);

	if (negativ) {
		*--ptr = '-';
	}

	char* result = (char*)malloc(sizeof(buffer) - (ptr - buffer));
	if (result != 0)
	{
		strcpy(result, ptr);
	}

	return result;
}

int main() 
{
	int number, symbols;
	puts("Enter an integer:");
	scanf("%d", &number);
	puts("Enter symbols: ");
	scanf("%d", &symbols);

	char* result = correct(number, symbols);
	if (result!=0)
	{
		printf("Number in base %d: %s\n", symbols, result);
		free(result);
	}
	else { puts("invalid base!"); }
	return 0;
}
