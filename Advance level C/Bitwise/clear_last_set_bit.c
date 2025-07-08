#include<stdio.h>
int main(){
	int data, result, i;
	printf("Enter a number : ");
	scanf("%d", &data);
	i = data-1;
	result = data & i;
	printf("Changed data : %d\n", result);
	return 0;
}
