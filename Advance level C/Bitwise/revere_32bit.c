#include<stdio.h>
void print_bit(unsigned int data){
	int i;
	for(i = 32; i >= 0; i--){
		printf("%d ", (data >> i) & 1);
	}printf("\n");
}unsigned int revrese_32bit(unsigned int data){
	int i;
	unsigned int result;
	for(i = 0; i < 32; i++){
		result <<= 1;
		result |= data & 1;
		data >>= 1;
	}return result;
}int main(){
	unsigned int data, revrese;
	printf("Entr a number : ");
	scanf("%d", &data);
	printf("Orginal numbers\n");
	print_bit(data);
	revrese = revrese_32bit(data);
	printf("Reversed bit are\n");
	print_bit(revrese);
	return 0;
}
