#include<stdio.h>
#define swap(data) (((data & 0x00ff) << 8) | ((data & 0xff00) >> 8))
int main(){
	int data, mask, result;
	printf("Enter a hexadecimal value in for 16bit : ");
	scanf("%x", &data);
	result = swap(data);
	printf("Data given by user is : 0x%x\n", data);
	printf("swaped data is : 0x%x\n", result);
	return 0;
}
