#include <stdio.h>
int main(){
    printf("RA2211042010012\n");
    int a,b,c;
    printf("Enter Bidding by Alice Bob and Charlie: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("Alice");
    }if(b>a&&b>c){
        printf("Bob");
    }if(c>a&&c>b){
        printf("Charlie");
    }
}
