#include<stdio.h>
int main( ){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    int mang[n],i,j,k,sum;
    for(i=0;i<n;i++){
        printf("nhap gia tri %d : ",i);
        scanf("%d",&mang[i]);
        for(j=0;j<i;j++){
            for(k=0;k<i;k++){
                if(mang[k]>mang[k+1]){
                    sum=mang[k];
                    mang[k]=mang[k+1];
                    mang[k+1]=sum;
                }
            }
            
        }
        for(k=0;k<=i;k++){
            printf("%5d\n",mang[k]);
        }
    }
    
}
