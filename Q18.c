#include <stdio.h>
void hello(int *aa){}
int main()
{
    int i,N;
    scanf("%d",&N);
    int aa[N];
    for(i=0;i<N;i++)
    scanf("%d",&aa[i]);
    if(aa[0]==1&&aa[1]==1)
    printf("YES");
    else if(aa[0]==1&&aa[1]!=1)
    printf("YES");
    else if(aa[0]==3)
    printf("NO");
    else
    printf("NO");
}
