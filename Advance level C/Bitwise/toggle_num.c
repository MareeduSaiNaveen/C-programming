#include<stdio.h>
void print_bit(unsigned int data, int count){
	int i;
	for(i = count-1; i >=0 ; i--){
		printf("%d ", (data >> i) & 1);
	}printf("\n");
}int count_1(unsigned int data){
	int count;
	while(data > 0){
		data = data >> 1;
		count++;
	}return count;
}int main(){
	unsigned int data, mask, result;
	int count, i = 0;
	printf("Enter a number : ");
	scanf("%u", &data);
	count = count_1(data);
	print_bit(data, count);
	while(count > i){
		data = data ^ (1 << i);
		i++;
	}print_bit(data, count);
	return 0;
}
