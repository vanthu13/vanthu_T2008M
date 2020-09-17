#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, d, x1, x2, x;
	printf("Nhap vao cac he so phuong trinh bac hai a:");
	scanf("%f", &a);
	
	printf("Nhap vao cac he so phuong trinh bac hai b:");
	scanf("%f", &b);
	
	printf("Nhap vao cac he so phuong trinh bac hai c:");
	scanf("%f", &c);
	
	if (a == 0){ 
		if(b == 0 && c != 0){
			printf("Phuong trinh vo nghiem\n");
		} else if(b == 0 && c == 0 ){
			printf("Phuong trinh vo so nghiem\n");
		} else {
			x = -c / b;
			printf("Ngiem cua phuong trinh = %f", x);
		}
	} else { 
		d = b * b - 4 * a * c;
		if(d < 0){
			printf("Phuong trinh vo nghiem");
		}else if(d == 0){
			x1 = -b/(2 * a);
			printf("Phuong trinh co nghiem kep X = %f", x1);
		}else{
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("Nghiem cua phuong trinh la :\nx1 = %f\nx2 = %f", x1, x2);
		}
	}
}
