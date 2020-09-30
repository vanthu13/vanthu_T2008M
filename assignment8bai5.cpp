#include<stdio.h>
int main(){
	int a,b,i,ucln,tich;
	int dem=0;
	printf("nhap a,b:\n");
	scanf("%d\n%d",&a,&b);
	tich=a*b;
	for(i=1;i<tich;i++){
		if(i%a==0 && i%b==0){
			ucln=tich/i;
			dem++;
		}
	}
	printf("UCLN:%d",ucln);	
}
