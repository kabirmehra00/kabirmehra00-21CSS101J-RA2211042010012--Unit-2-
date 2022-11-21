#include <stdio.h>
void main() {
  printf("RA2211042010012\n");
	char ch;
	printf("Enter a character : ");
	ch = getchar();
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
	 //fill the appropriate if condition
		printf("Given character %c is an alphabet\n", ch);
	} else if(ch>='0' && ch<='9') {
	 //fill the appropriate else if condition
		printf("Given character %c is a digit\n", ch);
	} else{
	 //fill the appropriate else condition
		printf("Given character %c is neither an alphabet nor a digit\n", ch);
	}
}
