#include<stdio.h>
int main(){
	int row, col, i, j, num = 1;
	printf("Enter a column : ");
	scanf("%d", &col);
	printf("Enter a row : ");
	scanf("%d", &row);
	int arr[row][col];
	
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			arr[i][j] = num++;
		}
	}for(i = col-1; i >= 0; i--){
		for(j = 0; j < row; j++){
			printf("%d ", arr[j][i]);
		}printf("\n");
	}
	return 0;
}
