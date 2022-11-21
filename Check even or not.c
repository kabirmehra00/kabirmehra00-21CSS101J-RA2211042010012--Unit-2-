#include <stdio.h>
void main() {
	printf("RA2211042010012\n");
	int number;
	printf("Enter an integer value : ");
	// read the int value
	scanf("%d",&number);
	if (number % 2 == 0  ) {
		printf("The given number %d is an even number\n", number);	 
	} else {
		 // print even or odd
		 printf("The given number %d is an odd number\n", number);
	}
}	
