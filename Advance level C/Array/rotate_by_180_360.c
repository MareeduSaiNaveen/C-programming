#include<stdio.h>
int main(){
	int num = 1, i, j, m, n, row, col;
	printf("Enter a size of array : ");
	scanf("%d", &row);
	printf("Enter a size of arrat : ");
	scanf("%d", &col);
	int arr[row][col];
	int arr1[row][col];
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			arr[i][j] = num++;
		}
	}m = 0;
	for(i = col-1; i >= 0; i--){
		n = 0;
		for(j = row-1; j >= 0; j--){
			arr1[m][n] = arr[i][j];
			n++;
		}m++;
	}printf("180\n");
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			printf("%d ", arr1[i][j]);
		}printf("\n");
	}n = 0;
	m = 0;
	for(i = col-1; i >= 0; i--){
		n = 0;
		for(j = row-1; j >= 0; j--){
			arr[m][n] = arr1[i][j];
			n++;
		}m++;
	}printf("360\n");
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			printf("%d ", arr[i][j]);
		}printf("\n");
	}return 0;
}
