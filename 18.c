#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat1[2][3] = { {2, 3, 4}, {5, 6, 7} };
	int mat2[3][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
			printf("%-3d", mat1[i][j]);
	}
	printf("\n");

	for (i = 0; i < 2; i++)
		for (j = 0; j < 3; j++)
			mat2[j][i] = mat1[i][j];

	for (i = 0; i < 3; i++) {
		printf("\n");
		for (j = 0; j < 2; j++)
			printf("%-3d", mat2[i][j]);
	}
	printf("\n");
	return 0;
}