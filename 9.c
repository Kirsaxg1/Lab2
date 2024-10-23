//#include <stdio.h>
//#define SIZE 10
//#define PRINT_ARR puts("Enter 10 numbers in arr:"); for (i = 0; i < SIZE; i++) {scanf("%lf", &arr1[i]);}
//
//int main() {
//    double arr1[SIZE], arr2[SIZE];
//    int i, j = 0;
//
//    PRINT_ARR;
//
//    for (i = 0; i < SIZE; i++) {
//        int dublicate = 0;
//        for (int k = 0; k < i; k++) {
//            if (arr1[i] == arr1[k]) {
//                dublicate = 1;
//                break;
//            }
//        }
//        if (!dublicate) {
//            arr2[j] = arr1[i];
//            j++;
//        }
//    }
//    puts("new arr =");
//    for (i = 0; i < j; i++) {
//        printf("%lf ", arr2[i]);
//    }
//    printf("\n");
//    return 0;
//    }


//#include <stdio.h>
//#include <string.h>
//#define SIZE 20
//
//// Function for naive substring search
//
//char* castum_strstr(const char* text, const char* pattern) {
//
//    int text_len = strlen(text);
//    int pattern_len = strlen(pattern);
//
//    // We go through all the positions in the text where the substring can begin
//
//    for (int i = 0; i <= text_len - pattern_len; i++) {
//
//        // Comparing the substring characters with the sample characters
//
//        int j;
//        for (j = 0; j < pattern_len; j++) {
//            if (text[i + j] != pattern[j]) {
//
//                break; // If the characters do not match, move on to the next position
//            }
//        }
//
//        // If all the characters match, then the substring is found
//
//        if (j == pattern_len) {
//            return (char*)text + i;
//        }
//    }
//
//    // The substring was not found
//
//    return NULL;
//}
//
//int main() {
//
//    char* text[SIZE];
//    char* pattern[SIZE];
//
//    puts("Enter in text:");
//    fgets(text, SIZE, stdin);
//
//    puts("Enter in pettern:");
//    fgets(pattern, SIZE, stdin);
//
//    char* result = castum_strstr(text, pattern);
//
//    if (result != NULL) {
//        printf("naidena: %s\n", result);
//    }
//    else {
//        printf("ne naidena!\n");
//    }
//    return 0;
//}