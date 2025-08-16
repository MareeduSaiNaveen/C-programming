#include<stdio.h>
#include<stdint.h>
int main(){
	uint32_t num1, num2, mask;
	int value, count = 0;
	printf("Enter ai tow numbers : ");
	scanf("%d%d", &num1, &num2);
	mask = num1 ^ num2;
	while(mask){
		value = mask & 1;
		if(value){
			count++;
		}mask >>= 1;
	}printf("%d\n", count);
	return 0;
}
