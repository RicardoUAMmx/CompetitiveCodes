#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
	long int sum = 0;
	long int min = arr[0];
	long int max = arr[0];
	for (int i = 0; i < arr_count; i++) {
		sum += arr[i];
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%ld %ld", sum - max, sum - min);
}

int main (  ){
	int arr[5] = {1, 2, 3, 4, 5};
	miniMaxSum(5, arr);
	return 0;
	
}
