#include <stdio.h>
void main() {
	int year;
  printf("RA2211042010012\n");
	printf("Enter a year : ");
	scanf("%d", &year);
	// Fill in the missing
	if(year % 4 == 0 && year % 100 != 0 ){
		printf("%d is a leap year\n", year);
	} else if (year%400 == 0){
			printf("%d is a leap year\n", year);
	} else {
		printf("%d is not a leap year\n", year);
		}
}
