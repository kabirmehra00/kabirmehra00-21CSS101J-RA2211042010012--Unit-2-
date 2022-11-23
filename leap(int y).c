#include <stdio.h>
int leap(int y)
{
    if(y%4==0)
     return 1;
    else
     return 0;
}
int main()
{
    int y;
    scanf("%d",&y);
    if(leap(y))
     printf("Leap Year\n");
    else
     printf("Not a Leap Year\n");
    return 0; 
}
