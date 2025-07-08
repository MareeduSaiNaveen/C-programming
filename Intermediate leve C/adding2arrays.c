#include<stdio.h>
int input(int row,int col,int arr[row][col]){
	int i, j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d",&arr[i][j]);
		}
	}
}
int main(){
	int i, j, row, col;
	printf("Enter a number of row's : ");
	scanf("%d",&row);
	printf("Enter a number of col's : ");
	scanf("%d",&col);
	int arr1[row][col];
	int arr2[row][col];
	
	printf("Enter a frist array\n");
	input(row,col,arr1);
	printf("Enter a seconed array\n");
	input(row,col,arr2);

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr1[i][j] +=  arr2[i][j];
			printf("%d ",arr1[i][j]);
		}
	}
	printf("\n");
}
