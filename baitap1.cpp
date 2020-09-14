#include<stdio.h>
int main(){
int a;
printf("nhap so nguyen:");
scanf("%d", &a);
if(a>=2 && a<=7){
printf("la thu %d",a);
}
else{
if(a!=8){
printf("ko phai ngay trong tuan");
}
}
if(a==8){
printf("la chua nhat");
}
}
