#include <stdio.h>
void main(){
	int a, b, c;
	printf("RA2211042010012\n");
	printf("Enter 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		if (b>c){
			printf("The max and min of three numbers are : %d %d\n", a, c);
		} else if(a>c){
			printf("The max and min of three numbers are : %d %d\n", a ,b);
		} else {
			printf("The max and min of three numbers are : %d %d\n", c, b);
		}
	}
	else {
		if (a>c){
			printf("The max and min of three numbers are : %d %d\n", b, c);
		} else if(c>b){
			printf("The max and min of three numbers are : %d %d\n", c, a);
		} else {
			printf("The max and min of three numbers are : %d %d\n", b, a);
		}
	}
}
