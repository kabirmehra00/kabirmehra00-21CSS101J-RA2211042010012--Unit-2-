#include <stdio.h>
int main() {
  printf("RA2211042010012\n");
	char ch;
	start:
		printf("Enter a character : ");
		scanf(" %c", &ch);
		printf("The given character is : %c\n", ch);
		if (ch != '#') {
			goto start;
		}
}
