#include<stdio.h>
int main(){
    int a,i;
    printf("nhap a: ");
    scanf("%d",&a);
    if(a<2){
        printf("a khong phai la so nguyen to\n");
    }
    else{
    	int count=0;
        for(i=2;i<a;i++){
            if(a % i == 0){
                count++;
            }
        }
        if(count>0){
            printf("a khong phai la so nguyen to\n");
        }
        else{
            printf("a la so nguyen to\n");
        }
    }
}
