#include<stdio.h>
int main(){
	int data, mask = 0, result, bit1, bit2, i;
	printf("Enter a data : ");
	scanf("%d", &data);
	printf("Enter a bit 1 (Index from 1) : ");
	scanf("%d", &bit1);
	printf("Enter a bit 2 (Index from 1) : ");
	scanf("%d", &bit2);
	bit1 -= 1;
	bit2 -= 1;
	bit1 = (data >> bit1) & 1;
	bit2 = (data >> bit2) & 2;
	for(i = 32; i > 0; i--){
		printf("%d", (data >> i) & 1);
	}printf("\n");
	if(bit1 != bit2){
		mask = (1 << bit1) | (1 << bit2);
		data = data ^ mask;
	}printf("Swaped data : %d\n", data);
	for(i = 32; i > 0; i--){
		printf("%d", (data >> i) & 1);
	}printf("\n");
	return 0;
}

