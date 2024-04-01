#include <stdio.h>

int lonelyinteger(int a_size, int* a) {
	int result = 0;
	for (int i = 0; i < a_size; i++) {
		result ^= a[i];
	}
	return result;
}

int main() {
	int a[] = {1, 2, 3, 4, 3, 2, 1};
	int a_size = sizeof(a) / sizeof(a[0]);
	printf("%d\n", lonelyinteger(a_size, a));
	return 0;
}
