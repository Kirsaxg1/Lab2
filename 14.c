<<<<<<< HEAD
//#include <stdio.h>
//#include <stdlib.h>
//
//void find_max_min(int* arr, int size, int* max, int* min) {
//    *max = *min = arr[0];
//
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > *max) {
//            *max = arr[i];
//        }
//        if (arr[i] < *min) {
//            *min = arr[i];
//        }
//    }
//}
//
//int main() {
//    FILE* file = fopen("input.txt", "r");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return 1;
//    }
//
//    int size = 0;
//    while (fgetc(file) != EOF) {
//        size++;
//    }
//    rewind(file);
//
//    int* arr = (int*)malloc(size * sizeof(int));
//    for (int i = 0; i < size; i++) {
//        fscanf(file, "%d", &arr[i]);
//    }
//    fclose(file);
//
//    int max, min;
//    find_max_min(arr, size, &max, &min);
//
//    printf("Max element: %d\n", max);
//    printf("Min element: %d\n", min);
//
//    free(arr);
//
//    return 0;
//}
=======
//#include <stdio.h>
//#include <stdlib.h>
//
//void find_max_min(int* arr, int size, int* max, int* min) {
//    *max = *min = arr[0];
//
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > *max) {
//            *max = arr[i];
//        }
//        if (arr[i] < *min) {
//            *min = arr[i];
//        }
//    }
//}
//
//int main() {
//    FILE* file = fopen("input.txt", "r");
//    if (file == NULL) {
//        printf("Error opening file.\n");
//        return 1;
//    }
//
//    int size = 0;
//    while (fgetc(file) != EOF) {
//        size++;
//    }
//    rewind(file);
//
//    int* arr = (int*)malloc(size * sizeof(int));
//    for (int i = 0; i < size; i++) {
//        fscanf(file, "%d", &arr[i]);
//    }
//    fclose(file);
//
//    int max, min;
//    find_max_min(arr, size, &max, &min);
//
//    printf("Max element: %d\n", max);
//    printf("Min element: %d\n", min);
//
//    free(arr);
//
//    return 0;
//}
>>>>>>> f83ef99a0443b286f17e9a87d48c889bb2a8974a
