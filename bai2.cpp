#include<stdio.h>
int main( ){
    int n,i;
    float sum,a;
    printf("nhap n: ");
    scanf("%d",&n);
    a=1;
    sum=0;
    for(i=1;i<=n;i++){
        sum+=((float)a/i);
    }
    printf("%f",sum);
}
