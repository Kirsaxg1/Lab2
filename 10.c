//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int mat1[2][3] = { { 2, 3, 4 }, { 5, 6, 7 } };
//	int mat2[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
//	int mat3[2][2];
//	int i, j, k;
//
//	for (i = 0; i < 2; i++) {
//		printf("\n");
//		for (j = 0; j < 3; j++) {
//			printf("%-3d", mat1[i][j]);
//		}
//	}
//	printf("\n");
//
//	for (i = 0; i < 3; i++) {
//		printf("\n");
//		for (j = 0; j < 2; j++) {
//			printf("%-3d", mat2[i][j]);
//		}
//	}
//	printf("\n");
//
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < 2; j++) {
//			mat3[i][j] = 0;
//			for (k = 0; k < 3; k++) {
//				mat3[i][j] = mat1[i][k] * mat2[k][j];
//			}
//		}
//	}
//		
//
//	for (i = 0; i < 2; i++) {
//		printf("\n");
//		for (j = 0; j < 2; j++)
//			printf("%-3d", mat3[i][j]);
//	}
//	printf("\n");
//	return 0;
//}