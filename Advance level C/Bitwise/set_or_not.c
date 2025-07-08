#include<stdio.h>
#include<stdbool.h>
int main(){
	int data, bit, mask, result;
	printf("Enter a number : ");
	scanf("%d", &data);
	printf("Enter a bit : ");
	scanf("%d", &bit);
	bit -= 1;
	mask = (1 << bit);
	result = mask & data;
	printf("Rersult = %d\n", result);
	if(result)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
