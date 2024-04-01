#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < arr_rows; i++) {
		sum1 += arr[i][i];
		sum2 += arr[i][arr_columns - i - 1];
	}

	return abs(sum1 - sum2);
}

int main(  ){

	int n = 3;
	int a[3][3] = {{11, 2, 4}, {4, 5, 6}, {10, 8, -12}};
	int** arr = (int**)malloc(n * sizeof(int*));
	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(n * sizeof(int));
		for (int j = 0; j < n; j++) {
			arr[i][j] = a[i][j];
		}
	}

	printf("%d\n", diagonalDifference(n, n, arr));

	return 0;

}
