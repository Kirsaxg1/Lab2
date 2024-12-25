#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap_rows(double** matrix, int n, int row1, int row2) {
    for (int j = 0; j < n * 2; j++) { // �������� �� n * 2 ��� ������ � ����������� ��������
        double temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}

void multiply_row(double** matrix, int n, int row, double multiplier) {
    for (int j = 0; j < n * 2; j++) { // �������� �� n * 2 ��� ������ � ����������� ��������
        matrix[row][j] *= multiplier;
    }
}

void add_rows(double** matrix, int n, int row1, int row2, double multiplier) {
    for (int j = 0; j < n * 2; j++) { // �������� �� n * 2 ��� ������ � ����������� ��������
        matrix[row1][j] += matrix[row2][j] * multiplier;
    }
}

void print_matrix(double** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2; j++) { // �������� �� n * 2 ��� ������ � ����������� ��������
            printf("%lf ", matrix[i][j]);
        }
        printf("\n");
    }
}

double** invert_matrix(double** matrix, int n) {
    // �������� ����������� ������� [A|I]
    double** augmented_matrix = (double**)malloc(n * sizeof(double*));
    double** inverted_matrix = (double**)malloc(n * sizeof(double*));

    for (int i = 0; i < n; i++) {
        augmented_matrix[i] = (double*)malloc(2 * n * sizeof(double));
        inverted_matrix[i] = (double*)malloc(n * sizeof(double));
        for (int j = 0; j < n; j++) {
            augmented_matrix[i][j] = matrix[i][j];
            augmented_matrix[i][j + n] = (i == j) ? 1.0 : 0.0; // ��������� �������
        }
    }

    // ������ ��� ������ ������
    for (int i = 0; i < n; i++) {
        // ����� ������������� �������� � �������
        double maxEl = fabs(augmented_matrix[i][i]);
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(augmented_matrix[k][i]) > maxEl) {
                maxEl = fabs(augmented_matrix[k][i]);
                maxRow = k;
            }
        }
        // ����� ������� ������ � ������������
        swap_rows(augmented_matrix, n, i, maxRow);

        // ������������ ������� ������
        double divisor = augmented_matrix[i][i];
        if (divisor == 0) {
            printf("������� ���������, �������� ������� �� ����������.\n");
            for (int i = 0; i < n; i++) {
                free(augmented_matrix[i]);
            }
            free(augmented_matrix);
            free(inverted_matrix);
            return NULL;
        }
        multiply_row(augmented_matrix, n, i, 1.0 / divisor);

        // ��������� ��������� �����
        for (int k = 0; k < n; k++) {
            if (k != i) {
                add_rows(augmented_matrix, n, k, i, -augmented_matrix[k][i]);
            }
        }
    }

    // ���������� �������� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inverted_matrix[i][j] = augmented_matrix[i][j + n];
        }
    }

    // ������������ ������
    for (int i = 0; i < n; i++) {
        free(augmented_matrix[i]);
    }
    free(augmented_matrix);

    return inverted_matrix;
}

int main() {
    int n;
    printf("������� ����������� �������: ");
    scanf("%d", &n);

    double** matrix = (double**)malloc(n * sizeof(double*)); // ���������� ��������� ������
    printf("������� �������� �������:\n");
    for (int i = 0; i < n; i++) {
        matrix[i] = (double*)malloc(n * sizeof(double));
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    double** inverted_matrix = invert_matrix(matrix, n);
    if (inverted_matrix != NULL) {
        printf("�������� �������:\n");
        print_matrix(inverted_matrix, n);

        // ������������ ������ ��� �������� �������
        for (int i = 0; i < n; i++) {
            free(inverted_matrix[i]);
        }
        free(inverted_matrix);
    }

    // ������������ ������ ��� �������� �������
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
