#include<stdio.h>
int main( ){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int i,mang[n],j;
    for(i=0;i<n;i++){
            printf("nhap %d:",i);
            scanf("%d",&mang[i]);
        for(j=0;j<i;j++){
            while(mang[i]==mang[j]){
                printf("nhap lai gia tri %d:",i);
                scanf("%d",&mang[i]);
            }
        }
    }
}
