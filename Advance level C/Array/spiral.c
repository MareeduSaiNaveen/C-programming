#include<stdio.h>
int main(){
	int i, j, col, row, num = 1;
	printf("Enter a size of col : ");
	scanf("%d", &col);
	printf("Enter a size of row : ");
	scanf("%d", &row);

	int arr[col][row];

	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			arr[i][j] = num++;
		}
	}
	int top = 0, right = col-1, bottem = row-1, left = 0;

	while(top <= bottem && left <= right){
		for(i = left; i <= right; i++){
			printf("%d ", arr[top][i]);
		}top++;
		for(i = top; i <= bottem; i++){
			printf("%d ", arr[i][right]);
		}right--;
		if(top <= bottem){
			for(i = right; i >= left; i--){
				printf("%d ", arr[bottem][i]);
			}bottem--;
		}if(left <= right){
				for(i = bottem; i >= top; i--){
				printf("%d ", arr[i][left]);
			}left++;
		}
	}printf("\n");
	return 0;
}
