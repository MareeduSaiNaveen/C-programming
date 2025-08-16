#include<stdio.h>
int add(int *arr,int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", *(arr+i));
	}printf("\n");
	return 0;
}int (*fptr)(int *arr, int size);
int main(){
	int size;
	int arr[] = {10, 20, 30, 40, 50};
	size = sizeof(arr)/sizeof(arr[0]);
	fptr = add;
	(*fptr)(arr, size);
	return 0;
}
