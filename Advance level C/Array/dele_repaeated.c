#include<stdio.h>
void delete(int *arr, int *size){
	int i, j, n, len = *size;
	for(i = 0; i < *size-1; i++){
		j = i+1;
		if(arr[i] == arr[j]){
			for(n = j; n < *size-1; n++){
				arr[n] = arr[n+1];
			}(*size)--;
			i--;
		}
	}
}int main(){
	int size, num = 1, i;
	printf("Enter a number of elements in array : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}delete(arr, &size);
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
