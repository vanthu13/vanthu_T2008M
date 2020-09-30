#include<stdio.h>
int main(){
	int a,b,c;
	int S;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	printf("Nhap c: ");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a){
		S = a*b*c;
		printf("Dien tich tam giac = %d",S);
	}else{
		printf("ko phai la tam giac");
	}
	return 0;
}
