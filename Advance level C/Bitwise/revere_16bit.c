#include<stdio.h>
void print_bit(unsigned int data){
	int i;
	for(i = 15; i >= 0; i--){
		printf("%d ", (data >> i) & 1);
	}printf("\n");
}unsigned int reverse_16bit(unsigned int data){
	int i;
	unsigned int result = 0;
	for(i = 0; i < 16; i++){
		result <<= 1;
		result |= data & 1;
		data >>= 1;
	}return result;
}int main(){
	unsigned int num, reverse;
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Orginal number\n");
	print_bit(num);
	reverse = reverse_16bit(num);
	printf("Reversed bits are\n");
	print_bit(reverse);
	return 0;
}
