#include<stdio.h>
int roate180(int size, int arr[size][size], int arr1[size][size]){
	int i, j, n = 0, m = 0;
	for(i = size-1; i >= 0; i--){
		m = 0;
		for(j = size-1; j >= 0; j--){
			arr1[n][m] = arr[i][j];
			m++;
		}n++;
	}
}int main(){
	int num = 1, i, size, j;
	printf("Enter a size of col ");
	scanf("%d", &size);
	int arr1[size][size];
	int arr[size][size];
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			arr[i][j] = num++;
		}
	}roate180(size, arr, arr1);
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%d ", arr1[i][j]);
		}printf("\n");
	}return 0;
}
