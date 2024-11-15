//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//int convertToDecimal(const char* str, int base) {
//    if (base < 2 || base > 36) {
//        fprintf(stderr, "Base must be in the range [2..36]\n");
//        return -1; 
//    }
//
//    int result = 0;
//    int sign = 1; 
//    const char* ptr = str;
//
//    
//    if (*ptr == '-') {
//        sign = -1;
//        ptr++;
//    }
//    else if (*ptr == '+') {
//        ptr++;
//    }
//
//    while (*ptr) {
//        int value;
//
//        
//        if (isdigit(*ptr)) {
//            value = *ptr - '0'; 
//        }
//        else if (isalpha(*ptr)) {
//            value = tolower(*ptr) - 'a' + 10; 
//        }
//        else {
//            fprintf(stderr, "Invalid character '%c' for base %d\n", *ptr, base);
//            return -1; 
//        }
//
//       
//        if (value >= base) {
//            fprintf(stderr, "Character '%c' is not valid for base %d\n", *ptr, base);
//            return -1; 
//        }
//
//        // Обработка переполнения
//        if (result > (INT_MAX - value) / base) {
//            fprintf(stderr, "Integer overflow occurred\n");
//            return -1; 
//        }
//
//        result = result * base + value;
//        ptr++;
//    }
//
//    return result * sign;
//}
//
//int main() {
//    const char* number = "1A"; 
//    int base = 16;
//
//    int decimalValue = convertToDecimal(number, base);
//    if (decimalValue != -1) {
//        printf("The decimal value of %s in base %d is %d\n", number, base, decimalValue);
//    }
//
//    return 0;
//}
