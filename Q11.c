#include <stdio.h>
int main()
{
char matchscenario[102];
int t;
scanf("%d",&t);
while(t>0)
{
    int c=0,m=0,o=0;
    scanf("%s",matchscenario);
    for(int i=0;i<strlen(matchscenario);i++)
    {
      if(matchscenario[i]=='1')
      m++;
      else
      o++;
      if(m==11 || o==11)
      { if(m==11)
        c++;
            break;}
    }
    if(c>0)
    printf("WIN");
    else
    printf("LOSS");
    printf("\n");
    t–;
}
}
