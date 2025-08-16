#include<stdio.h>
#define ans(data, mask) mask & data;
void main(void){
	int data, bit, result, mask;
	printf("Enter a number : ");
	scanf("%d", &data);
	printf("Enter a bit to check : ");
	scanf("%d", &bit);
	mask |= (1 << bit);
	result = ans(data, mask);
	if(result)
		printf("Given bit is set\n");
	else
		printf("Given bit not set\n");
}
