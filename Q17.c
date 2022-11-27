#include <stdio.h>
union price
{
    float inr;
};
int main()
{
    int t;
    union price book;
    scanf("%d",&t);
    while(t!=0)
    { scanf("%f",&book.inr);
     printf("%.2f\n",(book.inr*55.26));
    }
}
