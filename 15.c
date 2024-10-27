//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
//#define SIZE 20
//
//void rearrange_the_characters(char* line) {
//
//	int line_len = strlen(line);
//
//	char* numbers = malloc(line_len * sizeof(char));
//	char* the_letters = malloc(line_len * sizeof(char));
//	char* other = malloc(line_len * sizeof(char));
//
//	if (numbers == NULL || the_letters == NULL || other == NULL) {
//		puts("Memory allocation error");
//		return 1;
//	}
//
//	int N_count = 0, T_count = 0, O_count = 0;
//
//	for (int i = 0; i < line_len; i++) {
//		if (isdigit(line[i])) {
//			numbers[N_count++] = line[i];
//		}
//		else if (isalpha(line[i])) {
//			the_letters[T_count++] = line[i];
//		}
//		else {
//			other[O_count++] = line[i];
//		}
//	}
//
//
//	int i = 0, j = 0, k = 0;
//
//	for (int i = 0; i < line_len; i++) {
//		if (j < N_count) {
//			line[i] = numbers[j++];
//		}
//		else if (k < T_count) {
//			line[i] = the_letters[k++];
//		}
//		else {
//			line[i] = other[O_count++];
//		}
//	}
//	free(numbers);
//	free(the_letters);
//	free(other);
//}
//
//int main() {
//	char line[SIZE];
//	puts("Enter line 20 max:");
//	fgets(line, SIZE, stdin);
//	line[strcspn(line, "\n")] = 0;
//
//	rearrange_the_characters(line);
//
//	printf("New line: %s\n", line);
//
//	return 0;
//	}