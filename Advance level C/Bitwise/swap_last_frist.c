#include<stdio.h>
#include<stdint.h>
int main(){
	uint32_t data, max, last, mask;
	int i;
	printf("Enter a number : ");
	scanf("%u", &data);
	max = data & (1 << 31);
	last = data & 1;
	max = (max >> 31);
	if(max != last){
		mask = (1U << 31) | 1U;
		data ^= mask;
	}for(i = 31; i >= 0; i--){
		printf("%d ", (data >> i) & 1);
	}printf("\n");
	return 0;
}
