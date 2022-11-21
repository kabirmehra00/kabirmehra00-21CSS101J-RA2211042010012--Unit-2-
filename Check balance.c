#include <stdio.h>
void main() {
	printf("RA2211042010012\n");
	int b;
	printf("Enter balance : ");
	scanf("%d",&b);
	if (b < 1000) {
		printf("Balance is low\n");
	} else {
		printf("Sufficient balance\n");
	}
}
