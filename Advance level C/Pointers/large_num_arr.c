#include<stdio.h>
int main(){
	int i, size, max;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter a elemnts in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}int *ptr = arr;
	size = sizeof(arr)/sizeof(arr[0]);
	for(i = 1; i < size; i++){
		if(ptr[i] > max){
			max = ptr[i];
		}
	}printf("max : %d\n", max);
	return 0;
}
