#include <stdio.h>
int main() {
  printf("RA2211042010012\n");
	int rows, rowIndex, colIndex, num = 1;
	printf("Enter the number of rows : ");
	scanf("%d", &rows);
	for (rowIndex = 1; rowIndex <= rows; rowIndex++) {
		for (colIndex = 1; colIndex <= rowIndex; colIndex++) {
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
}
