#include<stdio.h>
int main(){
	int row, col, arr[50][50], i, j, sum = 0, num = 1;
	printf("Enter a size of row : ");
	scanf("%d", &row);
	printf("Enter a size of col : ");
	scanf("%d", &col);
	for(i = 0; i < row-1; i++){
		for(j = 0; j < col-1; j++){
			//scanf("%d", &arr[i][j]);
			arr[i][j] = num++;
		}
	}for(i = 0; i < row-1; i++){
		sum = 0;
		for(j = 0; j < col-1; j++){
			sum += arr[i][j];
		}arr[i][col-1] = sum;
	}for(j = 0; j < col-1; j++){
		sum = 0;
		for(i = 0; i < row-1; i++){
			sum += arr[i][j];
		}arr[row-1][j] = sum;
	}sum = 0;
	for(i = 0; i < row-1; i++){
		sum += arr[i][col-1];
	}arr[row-1][col-1] = sum;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
		}printf("\n");
	}return 0;
}
