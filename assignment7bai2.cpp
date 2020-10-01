#include<stdio.h>
int main( ){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int i,low,hi,x,mid,mang[n],j,sum;
    for(i=1;i<=n;i++){
        printf("nhap gia tri %d : ",i);
        scanf("%d",&mang[i]);
    }
    for(i=1;i<n-1;i++){
        for(j=1;j<=n;j++){
            if(mang[j]>mang[j+1]){
                sum=mang[j];
                mang[j]=mang[j+1];
                mang[j+1]=sum;
            }
        }
    }
    for(j=1;j<=n;j++){
        printf("%5d",mang[j]);
    }
    low=1;
    hi=n;
    printf("\nnhap x: ");
    scanf("%d",&x);
    for(i=low;i<=hi;i++){
        mid=(low+hi)/2;
        if(x<mang[mid]){
            hi=mid-1;
        }
        if(x>mang[mid]){
            low=mid+1;
        }
    }
    printf("\nso co gia tri nho hon x va gan x nhat la: %d \n",mid-1);
    
}
