#include<stdio.h>
int main(){
    int n,i,tong;
    tong=0;
    printf("nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            tong+=i;
            printf("uoc: %d\n",i);
        }
    }
    printf("tong: %d\n",tong);
}
