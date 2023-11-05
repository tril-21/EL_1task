#include "stdio.h"
#include "stdbool.h"

int main(){
	int a;
	scanf("%d",&a);
	bool s=false;
	int sizeNumber=8*sizeof(a);
	while(1){
		if(sizeNumber==0)
			break;
		if(a&0x80000000){
			printf("1");
			s=true;
		}else{
			if(s)
				printf("0");
		}
		
		a=a<<1;
		sizeNumber--;
	}
	
	return 0;
}
