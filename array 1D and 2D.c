#include <stdio.h>
int main() {
	int a[5] = {1, 2}, i, j;
	printf("One-dimension initialization result : ");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	int arr[3][2] = {5,6,7};
	printf("\nTwo-dimension initialization result is \n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
