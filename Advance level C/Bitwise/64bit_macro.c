#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#define swap(data) (((data & 0xffffffffull) << 32) | ((data & 0xffffffff00000000ull) >> 32));
int main(){
	uint64_t data, result;
	printf("Enter a data which is in 64 bit : ");
	scanf("%" SCNx64, &data);
	result = swap(data);
	printf("Given data by user : %"PRIx64"\n", data);
	printf("Swap data : %"PRIx64"\n", result);
	return 0;
}
