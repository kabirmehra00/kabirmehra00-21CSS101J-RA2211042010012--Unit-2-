#include<stdio.h>
int main(){
    float units;
    printf("RA2211042010012\n");
    printf("Units consumed : \n");
    scanf("%f", &units);
    if (units <= 50) {
        printf("Total bill is: %f\n", 0.50*units);
    } else if ((units>50) && (units<=150)) {
        printf("Total bill is: %f\n", 0.75*units);
    } else if ((units>150) && (units<=250)) {
        printf("Total bill is: %f\n", 1.2*units);
    } else if (units>250) {
        printf("Total bill is: %f\n", (1.5*units) + (0.1*(1.5*units)));
    }
}
