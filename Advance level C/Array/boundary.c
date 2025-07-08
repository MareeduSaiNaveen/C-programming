#include<stdio.h>
int main(){
	int i, j, col, row;
	printf("Enter a col : ");
	scanf("%d", &col);
	printf("Enter a row : ");
	scanf("%d", &row);

	int arr[col][row];
	int num = 1;

	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			arr[i][j] = num++;
		}
	}
	int top = 0, right = row-1, bottem = col-1, left = 0;
	for(i = 0; i < col; i++){
		printf("%d ", arr[top][i]);
	}
	for(i = 1; i < row; i++){
		printf("%d ", arr[i][right]);
	}
	for(i = row-2; i >= 0; i--){
		printf("%d ", arr[bottem][i]);
	}
	for(i = row-2; i > 0; i--){
		printf("%d ", arr[i][left]);
	}printf("\n");
	return 0;
}
