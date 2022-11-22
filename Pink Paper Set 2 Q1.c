#include <stdio.h>
int main() {
  printf("RA2211042010012\n");
	int o,h,t;
	printf("Enter No. of Total Apples in the box :");
	scanf("%d",&t);
	printf("Enter No. of Hybrid Apples in the box :");
	scanf("%d",&h);
	o = t - h;
	printf("No of Total, Organic and Hybrid Apples : %d %d %d",t,o,h);
}
