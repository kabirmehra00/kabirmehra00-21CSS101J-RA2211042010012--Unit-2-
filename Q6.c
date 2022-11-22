#include <stdio.h>
int main(){   
    printf("RA2211042010012\n");
    int length,width,height,surfacearea;
    scanf("%d%d%d%d",&length,&width,&height,&surfacearea);
    surfacearea=2*(width*length+length*height+height*width);
    printf("%d\n",surfacearea);
}
