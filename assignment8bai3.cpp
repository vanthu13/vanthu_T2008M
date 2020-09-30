#include<stdio.h>
int main(){
	int a,b,c;
	int C;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);	
	if(a+b>c && a+c>b && c+b>a){
		C = a+b+c;
		printf("Chu vi tam giac la: %d",C);
	}else{
		printf("ko phai la tam giac");
	}
	return 0;
}
