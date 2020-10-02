#include <stdio.h>
int main(){
	int i;
	int x1 = 0, x2 = 1, x3 = 1;
	while(i<11){
	 if(i==0||i==1){
		printf("%5d",x2);
	}else{
			x1 = x2;
			x2 = x3;
			x3 = x1 + x2;
		printf("%5d ",x3);
	}
	i++;
}
}
