#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, p, C, s=0;
	printf("Nhap canh thu nhat: ");
		scanf("%f", &a);
		printf("Nhap canh thu hai: ");
        scanf("%f", &b);
        printf("Nhap canh thu ba: ");
		scanf("%f", &c);
		if((a<=b+c)&&(b<=a+c)&&(c<=a+b)){
		printf("\nDay la ba canh cua tam giac");
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		C = p*2;
		printf("\nDien tich cua tam giac la %f",s);
		printf("\nChu vi cua tam giac la %f",C);
		}else
		printf("\nDay khong phai la ba canh cua tam giac");
		}
