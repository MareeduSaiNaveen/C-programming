#include<stdio.h>
int main(){
	int data, bit, mask, odd_bit, even_bit, i, result;
	printf("Enter a data : ");
	scanf("%d", &data);
	even_bit = 0xAAAAAAAA;
	odd_bit = 0x55555555;
	even_bit = (data & even_bit) >> 1;
	odd_bit = (data & odd_bit) << 1;
	result = even_bit | odd_bit;
	printf("After swaping %d\n", result);
	for(i = 31; i >= 0; i--){
		printf("%d", (result >> i) & 1);
	}printf("\n");
	return 0;
}
