#include<stdio.h>
int main( ){
    int i,n,t;
    printf("nhap n: ");
    scanf("%d",&n);
    t=0;
    i=1;
    while(i<=n){
        t=t+i;
        i++;
    }
    printf("%d\n",t);
}
