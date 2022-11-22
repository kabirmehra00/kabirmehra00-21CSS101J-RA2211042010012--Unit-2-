#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    int quo,rem;
    scanf("%d%d",&billamt,&amtgiven);
    quo=billamt/amtgiven;
    rem=billamt%amtgiven;
    printf("Quotient:%d\n",quo);
    printf("Remainder:%d\n",rem);
}
