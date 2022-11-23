#include <stdio.h>

int main()
{
    int aravspeed,aaronspeed,speeddiff;
    printf("RA2211042010012\n");
    scanf("%d%d",&aravspeed,&aaronspeed);
    if(aravspeed>aaronspeed){
        speeddiff=aravspeed-aaronspeed;
        printf("%d",speeddiff);
    }else{
        speeddiff=aaronspeed-aravspeed;
        printf("%d",speeddiff);
    }
}
        
