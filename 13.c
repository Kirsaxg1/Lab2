//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include <stdlib.h>
//#define SIZE 20
//
//int main() {
//
//	char line[SIZE];
//	
//	puts("Enter line:");
//	fgets(line, SIZE, stdin);
//	line[strcspn(line, "\n")] = 0;
//
//	int line_len = strlen(line);
//
//	char* new_line = malloc((line_len + 1) * sizeof(char));
//
//	if (new_line == NULL) {
//		puts("Error. repead");
//		return 1;
//	}
//
//	for (int i = 0; i < line_len; i++) {
//		if (i % 2 == 1) {
//			new_line[i] = toupper(line[i]);
//		} else {
//			new_line[i] = line[i];
//		}
//	}
//	new_line[line_len] = '\0';
//
//	printf("New line = %s\n", new_line);
//
//	free(new_line);
//
//	return 0;
//}