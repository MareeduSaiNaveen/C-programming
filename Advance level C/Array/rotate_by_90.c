#include<stdio.h>
int main(){
	int row, col, i, j, num = 1;
	printf("Enter a column : ");
	scanf("%d", &col);
	printf("Enter a row : ");
	scanf("%d", &row);
	int arr[row][col];
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr[i][j] = num++;
		}
	}for(i = 0; i < row; i++){
		for(j = col-1; j >= 0; j--){
			printf("%d ", arr[j][i]);
		}printf("\n");
	}
	return 0;
}
