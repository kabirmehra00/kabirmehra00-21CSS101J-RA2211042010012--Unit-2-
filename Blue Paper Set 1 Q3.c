#include <stdio.h>

int main(){
    int N, M, L;
    printf("RA2211042010012\n");
    printf("Number of Friends: ");
    scanf("%d", &N);
    printf("Number of left shoes: ");
    scanf("%d", &M);
    L = N-M; 
    printf("Number of Extra pairs of Shoes to be bought: %d\n",L);
    printf("Number of Right Shoes missing %d\n", M);
}
