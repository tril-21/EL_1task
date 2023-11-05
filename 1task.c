#include "stdio.h"
#include "stdbool.h"

int main(){
	int a;
	scanf("%d",&a);

	int sizeNumber=8*sizeof(a);
	int count=0;
	while(1){
		if(sizeNumber==0)
			break;
		if(a&1){
			count++;
		}
		a=a>>1;
		sizeNumber--;
	}
	printf("Количество единиц: %d", count);
	return 0;
}
