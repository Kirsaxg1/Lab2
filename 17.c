//#include <stdio.h>
//#include <string.h>
//#define SIZE 100
//
//void castum_strcat(char* dest, const char* src) {
//	while (*dest) { dest++; }
//	while (*src) {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}
//
//
//int main() {
//	char first_str[SIZE];
//	char second_str[SIZE];
//
//	puts("Print first str:");
//	fgets(first_str, SIZE, stdin);
//	first_str[strcspn(first_str, "\n")] = 0;
//
//	puts("Print second str:");
//	fgets(second_str, SIZE, stdin);
//	second_str[strcspn(second_str, "\n")] = 0;
//
//	castum_strcat(first_str, second_str);
//	printf("Finish = %s", first_str);
//	return 0;
//}