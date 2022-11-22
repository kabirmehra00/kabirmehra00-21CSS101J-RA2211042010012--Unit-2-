#include <stdio.h>
int main() {
    printf("RA2211042010012\n");
	int Age;
	printf("Enter your AGE:");
	scanf("%d",&Age);
	if(Age < 18){
	printf("Not Eligible to Vote");
	}else{
	printf("Eligible to Vote");
	}
}
