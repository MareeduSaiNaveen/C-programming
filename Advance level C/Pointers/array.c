#include<stdio.h>
int main(){
	int arr[] = {10, 20, 30, 40, 50};
	int *ptr = arr;
	printf("ptr = %p\n", ptr);
	printf("*ptr = %d\n", *ptr);
	printf("(*ptr + 2) = %d\n", (*ptr + 2));
	printf("*(ptr + 2) = %d\n", *(ptr + 2));
	return 0;
}
