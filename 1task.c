#include "stdio.h"
#include "stdbool.h"
void printNumber(int a){
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
}
int main(){
	int a, b, d;
	scanf("%d",&a);
	scanf("%d",&b);
	int c=a;
	if(a&0x00000004){
		
		if(b&0x00000004){
			c=a;
		}else{
		c=a&(~(0x00000004));
		}
	}
	else{
		c=a|(b&0x00000004);
	}
	printf("Двоичная запись 1 числа: ");
	printNumber(a);
	printf("\nДвоичная запись 2 числа: ");
	printNumber(b);
	printf("\nДвоичная запись числа с заменённым битом: ");
	printNumber(c);
	return 0;
}
