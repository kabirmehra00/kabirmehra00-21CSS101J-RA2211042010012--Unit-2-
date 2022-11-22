#include <stdio.h>
int main(){
    printf("RA2211042010012\n");
    int aravspeed,aaronspeed,speeddiff;
    scanf("%d%d",&aravspeed,&aaronspeed);
    if(aravspeed>aaronspeed){
        speeddiff=aravspeed-aaronspeed;
        printf("%d",speeddiff);
    }else{
        speeddiff=aaronspeed-aravspeed;
        printf("%d",speeddiff);
    }
}
