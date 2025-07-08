#include<stdio.h>
#include<stdint.h>
#define swap(data) (((data & 0x0000ffff) << 16) | ((data & 0xffff0000) >> 16))
int main(){
	uint32_t data, result;
	printf("Enter a data : ");
	scanf("%x", &data);
	result = swap(data);
	printf("Given data user : 0x%x\n", data);
	printf("Swaped data is : 0x%x\n", result);
	return 0;
}
