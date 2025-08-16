#include<stdio.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}int main(){
	int a = 20, b = 10;
	printf("a = %d\nb = %d\n", a, b);
	swap(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return 0;
}
