#include<stdio.h>
int main(){
	int arr[] = {10, 20, 30};
	int *ptr = arr;
	++*ptr;
	printf("%d after ++*ptr\n", *ptr);//11
	++ptr;
	printf("%d after ++ptr\n", *ptr);//20
	*--ptr;
	printf("%d after *--ptr\n", *ptr);//11
	--*ptr;
	printf("%d after ++*ptr\n", *ptr);//11
	return 0;
}
