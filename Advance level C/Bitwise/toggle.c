#include<stdio.h>
int main(){
	int data, l, r, mask, i, result;
	printf("Enter a nummber : ");
	scanf("%d", &data);
	printf("Enter a range of togle : ");
	scanf("%d%d", &l, &r);
	mask = 0;
	for(i = l-1; i < r; i++){
		mask |= (1 << i);
	}
	printf("data = %d\n", data);
	printf("mask = %d\n", mask);

	result = data^mask;

	printf("result = %d\n", result);
	return 0;
}
