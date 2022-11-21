#include <stdio.h>
void main() {
	int b;
	printf("Enter balance : ");
	scanf("%d",&b);
	if (b < 1000) {
		printf("Balance is low\n");
	} else {
		printf("Sufficient balance\n");
	}
}
