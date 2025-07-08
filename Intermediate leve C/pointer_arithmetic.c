#include<stdio.h>
int main(){
	int arr[] = {10, 20, 30, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i =0; i < n; i++){
		printf("%d ",arr[i]);
	}printf("\n");
	int *ptr = arr;
	printf("Normal arr : %d %p\n", *ptr, ptr);
	ptr++;	//int pointer add 4 bytes
	printf("After ptr++ : %d %p\n", *ptr, ptr);
	ptr--;	//int pointer sub 4 bytes
	printf("After ptr-- : %d %p\n", *ptr, ptr);
	ptr += 2;//inter pointer 4 bytes * 2 = 8 bytes
	printf("After ptr+2 : %d %p\n", *ptr, ptr);
	ptr -= 2;//inter pointer 4 bytes * 2 = 8 bytes
	printf("After ptr-2 : %d %p\n", *ptr, ptr);
	return 0;
}
