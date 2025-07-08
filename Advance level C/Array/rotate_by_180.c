#include<stdio.h>
int roate180(int size, int (*arr)[size]){
	int i, j;
	for(i = size; i >= 0; i--){
		for(j = size; j >= 0; j--){
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
}int main(){
	int num = 1, i, size, j;
	printf("Enter a size of col ");
	scanf("%d", &size);
	int arr[size][size];
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			arr[i][j] = num++;
		}
	}
	int (*fptr)(int size, int (*arr)[size]);
	fptr = roate180;
	(*fptr)(size - 1, arr);
	return 0;
}
