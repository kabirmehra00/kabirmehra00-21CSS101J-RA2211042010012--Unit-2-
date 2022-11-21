#include <stdio.h>
int main() {
  printf("RA2211042010012\n");
	int index, spaces, rows, col, number;
	printf("Enter number of rows : ");
	scanf("%d", &rows);
	for (index = 0; index < rows; index++) {
		for (spaces = rows; spaces > index; spaces--) {
			printf(" ");
		}
		number = 1;
		for (col = 0; col <= index; col++) {
			printf("%d ", number);
			number = number * (index - col) / (col + 1);
		}
		printf("\n");
	}
}
