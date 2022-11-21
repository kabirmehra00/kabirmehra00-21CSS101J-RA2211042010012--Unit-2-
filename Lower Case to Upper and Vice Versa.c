#include<stdio.h>
int main(){
  printf("RA2211042010012\n");
	int n;	
	char ch;	
	printf("1. Lowercase to Uppercase\n2. Uppercase to Lowercase\nEnter your option : ");	
	scanf("%d",&n);	
	switch (n)	
	case 1:	
	printf("Enter a Lowercase·character : ");	
	scanf("%c",&ch);	
	if(ch>='a'&&ch<='z'){		
		ch = ch - 32;		
		printf("Uppercase character : %c",ch);
		}else{		
			printf("%c is not a lowercase character",ch);
			}
	break;
	case 2:	
	printf("Enter a Uppercase·character : ");
	scanf("%c",&ch);
}
