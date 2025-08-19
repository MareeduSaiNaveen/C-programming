#include<stdio.h>
int modife(int arr[], int i, int *size){
	for(i; i < *size; i++){
		arr[i] = arr[i+1];
	}*size = *size - 1;
	return 0;
}int main(){
	int i, j, size, num = 1;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
		//arr[i] = num++;
	}for(i = 0; i < size; i++){
		for(j = i+1; j < size; j++){
			if(arr[i] == arr[j]){
				modife(arr, j ,&size);
			}
		}
	}for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
