#include<stdio.h>
int main( ){
    int mang[2][3];
    int i,j,hang,cot;
    hang=2;
    cot=3;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("nhap gia tri [%d][%d]: ",i,j);
            scanf("%d",&mang[i][j]);
        }
    }
    for(i=0;i<hang;i++){
        for(j=0;j<cot;j++){
            printf("%5d",mang[i][j]);
        }
        printf("\n");
    }
    printf("\nma tran chuyen vi la: \n");
    for(j=0;j<cot;j++){
        for(i=0;i<hang;i++){
            printf("%5d",mang[i][j]);
        }
        printf("\n");
    }
}
