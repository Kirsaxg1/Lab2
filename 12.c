//#include <stdio.h>
//#include <string.h>
//#define SIZE 20
//
////Function for naive substring search
//
//char* custom_strstr(const char* text, char* pattern) {
//
//	int text_len = strlen(text);
//	int pattern_len = strlen(pattern);
//
//    // We go through all the positions in the text where the substring can begin
//
//	for (int i = 0; i <= text_len - pattern_len; i++) {
//
//        // Comparing the substring characters with the sample characters
//
//		int j;
//		for (j = 0; j < pattern_len; j++) {
//			if (text[ i + j ] != pattern[j]) {
//
//				break; // If the characters do not match, move on to the next position
//			}
//		}
//        // If all the characters match, then the substring is found
//
//		if (j == pattern_len) {
//			return (char*)text + i;
//		}
//	}
//    // The substring was not found
//
//	return NULL;
//}
//
//int main() {
//
//	char text[SIZE];
//	char pattern[SIZE];
//
//	puts("Enter text:");
//	fgets(text, SIZE, stdin);
//
//	puts("Enter pattern:");
//	fgets(pattern, SIZE, stdin);
//
//	char* result = custom_strstr(text, pattern);
//
//	if (result != NULL) {
//		printf("Found: %s\n", result);
//	} else {
//        puts("Not found");
//    }
//
//	return 0;
//}