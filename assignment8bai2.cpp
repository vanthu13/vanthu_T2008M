#include<stdio.h>
int main(){
	int S=0,n,A;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(  ;n!=0;){
		A = n%10;
		S += A;
		n /= 10;
	}
	printf("Tong cac chu so la: %d",S);
	return 0;
}
