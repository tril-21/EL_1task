#include "stdio.h"
int main(){
	int a, b, c=0;
	scanf("%d",&a);
	scanf("%d",&b);
	c=(a&0xFFFFF0FF)|(b&0x00000F00);
	printf("Вывод результата:\n");
	printf("1 число:\t0x(a)=%x\n2 число:\t0x(b)=%x\nЧисло с замененным байтом:\t0x(c)=%x\n",a,b,c);
	return 0;
}
