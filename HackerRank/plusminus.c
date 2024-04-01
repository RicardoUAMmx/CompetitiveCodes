#include <stdio.h>

void plusMinus(int arr_count, int* arr) {
	int pnz[3] = {0, 0, 0};
	for(int i = 0; i < arr_count; i++){
		if(arr[i] > 0){
			pnz[0]++;
		} else if(arr[i] < 0){
			pnz[1]++;
		} else {
			pnz[2]++;
		}
	}

	printf("%.6f\n", (float)pnz[ 0 ]/arr_count);
	printf("%.6f\n", (float)pnz[ 1 ]/arr_count);
	printf("%.6f\n", (float)pnz[ 2 ]/arr_count);
}

int main(  ){
	int arr[] = {1, 1, 0, -1, -1};
	plusMinus(5, arr);
	return 0;
}
