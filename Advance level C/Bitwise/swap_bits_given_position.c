#include<stdio.h>
int main(){
	int data, mask = 0, result, bit1, bit2, i, pos1, pos2;
	printf("Enter a data : ");
	scanf("%d", &data);
	printf("Enter a bit 1 : ");
	scanf("%d", &pos1);
	printf("Enter a bit 2 : ");
	scanf("%d", &pos2);
	bit1 = (data >> pos1) & 1;
	bit2 = (data >> pos2) & 1;
	for(i = 31; i >= 0; i--){
		printf("%d", (data >> i) & 1);
	}printf("\n");
	if(bit1 != bit2){
		printf("%d %d\n", bit1, bit2);
		mask = (1 << pos1) | (1 << pos2);
		data = data ^ mask;
	}printf("Swaped data : %d\n", data);
	for(i = 31; i >= 0; i--){
		printf("%d", (data >> i) & 1);
	}printf("\n");
	return 0;
}

