#include<stdio.h>
int main(){
	int col, row, i, j;
	printf("Enter a col : ");
	scanf("%d",&col);
	printf("Enter a row : ");
	scanf("%d",&row);

	int arr[col][row];

	printf("Enter a %d elements : ", col*row);
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			scanf("%d",&arr[i][j]);
		}
	}for(i = 0; i < col; i++){
		if(i % 2 == 0){
			for(j = 0; j < col; j++){
				printf("%d ", arr[i][j]);
			}
		}else{
			for(j = row-1; j >= 0; j--){
				printf("%d ", arr[i][j]);
			}
		}printf("\n");
	}
	return 0;
}
