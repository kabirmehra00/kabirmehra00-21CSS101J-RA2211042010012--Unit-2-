#include <stdio.h>
int main() {
  printf("RA2211042010012\n");
    int zero=0,one=0,c=0,d,n,number;
    printf("Enter number\n");
    scanf("%d",&number);
    n=number;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    for(int i=0;i<c;i++)
    {
        d=number%10;
        number=number/10;
        if(d==1)
        one++;
        else if(d==0)
        zero++;
        else
        printf("Wrong input\n");
    }
    if(one==c || zero==c)
    printf("YES");
    else
    printf("NO");
    return 0;
}
