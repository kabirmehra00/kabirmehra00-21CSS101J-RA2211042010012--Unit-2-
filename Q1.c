#include <stdio.h>
int main(){
    printf("RA2211042010012\n");
    int U,V;
    int sum;
    scanf("%2d %2d",&U,&V);
    sum=U*V/2+((U%2)*(V%2));
    printf("%d",sum);
}
