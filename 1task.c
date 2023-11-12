#include "stdio.h"
int main(){
	unsigned int a, b, c=0;
	scanf("%d",&a);
	while(1){
		printf("Введите число от 0 до 255:\t");
		scanf("%d", &b);
		if(b>255||b<0){
			printf("Ошибка\n");
		}else{
			break;
		}
	}
	c=(a&0xFF00FFFF)|(b<<16);
	printf("Вывод результата:\n");
	printf("1 число:\t0x(a)=%x\n2 число:\t0x(b)=%x\nЧисло с замененным байтом:\t0x(c)=%x\n",a,b,c);
	return 0;
}
