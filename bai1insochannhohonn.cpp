#include<stdio.h>
int main( ){
    int n,i;
    printf("nhap n: ");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(i%2==0){
            printf("nhung so chan nho hon n:%d\n",i);
        }
    }
}
