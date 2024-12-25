//#include <stdio.h>
//#include <stdlib.h>
//
//int matrix_multiplication(int n, int matrix[n][n]) {
//	int mat = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			int m3 = matrix[j][i] / matrix[i][i];
//			for (int k = i; k < n; k++) {
//				matrix[j][k] -= m3 * matrix[i][k];
//			}
//		}
//		mat *= matrix[i][i];
//	}
//	return mat;
//}
//
//int main() {
//	int n;
//	puts("enter n:");
//	scanf("%d", &n);
//	int matrix[n][n];
//	puts("Enter elements:");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//	int determinant = matrix_multiplication(n, matrix);
//	printf("Determinant: %d\n", determinant);
//
//	return 0;
//}
#include <stdio.h>

#define N 3

int determinant(int matrix[N][N], int n) {
    int det = 0;
    int submatrix[N][N];

    if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[1][0] * matrix[0][1];
    }
    else {
        for (int x = 0; x < n; x++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == x) continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += (x % 2 == 0 ? 1 : -1) * matrix[0][x] * determinant(submatrix, n - 1);
        }
    }

    return det;
}

int main() {
    int matrix[N][N] = { {2, -1, 3}, {4, 2, 1}, {5, 8, 9} };

    int det = determinant(matrix, N);
    printf("Determinant of the matrix is %d\n", det);

    return 0;
#include <stdio.h>

int main() {

	int matrix1[3][3] = { {2, 6, 1}, {7, 3, 9}, {4, 1, 8} };

}