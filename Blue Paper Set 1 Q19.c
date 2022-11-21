#include<stdio.h>
int swap();
 int *pa;
 int *pb;
int main(){
    int a,b;  
    printf("Enter 2 numbers \n");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("after swap a = %d and b = %d",*pa,*pb);
}
int swap(int c,int d){
    pa=&c;
    pb=&d;
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
}
