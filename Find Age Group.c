#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
	int age, infant_age = 3, child_age = 13, senior_citizen_age = 60, centenarian_age = 100;
	printf("Enter age : ");
	scanf("%d", &age);
	if (age<=infant_age || age>=centenarian_age  ) {
		printf("Ticket Price: 0\n");
	} else if (age<=child_age || age>=senior_citizen_age ) {
		printf("Ticket Price: 5\n");
	} else {
		printf("Ticket Price: 10\n");
	}
}
