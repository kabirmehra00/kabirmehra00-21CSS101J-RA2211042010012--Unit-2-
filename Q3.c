#include <stdio.h>
int main(){ 
    printf("RA2211042010012\n");
    int n,m,a;
    int stones;
    scanf("%d %d %d",&n,&m,&a);
    stones=((n+a-1)/a)*((m+a-1)/a);
    printf("%d",stones);
}
