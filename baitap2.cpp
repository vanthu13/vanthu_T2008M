
#include<stdio.h>
int main(){
float a,b,t;
printf("so a:");
scanf("%f", &a);
printf("so b:");
scanf("%f", &b);
if(a>=b){
t=a/b;
printf("%f / %f = %f",a,b,t);
}else{
t=a*b;
printf("%f * %f = %f",a,b,t);
}
}
