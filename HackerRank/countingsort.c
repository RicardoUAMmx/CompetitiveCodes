#include <stdio.h>
#include <stdlib.h>

int* countingSort(int* arr, int n){
	int maxVal = 100; // Supposing the max value is 100
	int* freqs = (int*)malloc(sizeof(int)*maxVal);
	for(int i=0; i<maxVal; i++){
		freqs[i] = 0;
	}
	for(int i=0; i<n; i++){
		freqs[arr[i]]++;
	}
	return freqs;
}

int main(  ){
	int arr[] = {1, 4, 1, 2, 7, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	int* freqs = countingSort(arr, n);
	for( int i=0; i<n; i++ ){
		printf("%2d", freqs[i]);
	}
	printf("\n");
	return 0;
}

