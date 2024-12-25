#include <stdio.h>
#include <string.h>

int m_strlen(char* str){
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
}
	return count;
}

int main() {
	char str[100];
	puts("Enter in str:");
	fgets(str, 100, stdin);

	if (str[98] != '\0') {
		puts("Error: Input string is too long");
		return 1;
	}

	int i = m_strlen(str);
	printf("\nDline str = %d\n", i );
	return 0;

}