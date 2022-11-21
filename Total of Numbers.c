#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
	int total = 0;
	while (total <= 100) {
		int num;
		printf("Enter a number : ");
		scanf("%d", &num);
		total += num;
	}
	printf("The total of given numbers is : %d\n", total);
}
