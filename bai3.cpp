#include<stdio.h>
int main(){
	int a,sl;
	for (int a = 1; a < 200; a++){
        if (a % 2 != 0){
            sl += a;
        }
    }
    printf("tong 100 so le dau tien la: %d\n",sl);
}
