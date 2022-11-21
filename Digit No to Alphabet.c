#include <stdio.h>
void main() {
	int value;
  printf("RA2211042010012\n");
	printf("Enter a number : ");
	scanf("%d", &value);
	switch (value) {
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		case 4:
			printf("Four\n");
			break;
		case 5:
			printf("Five\n");
			break;
		case 6:
			printf("Six\n");
			break;
		case 7:
			printf("Seven\n");
			break;
		case 8:
			printf("Eight\n");
			break;
		case 9:
			printf("Nine\n");
			break;
		case 10:
			printf("Ten\n");
			break;
		default:
			printf("Number %d is not in the range 1 to 10", value);
	}
}
