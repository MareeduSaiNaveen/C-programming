#include<stdio.h>
int input(int row,int col,int arr1[row][col], int arr[row][col]){
	int i, j;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			arr[j][i] =  arr1[i][j];
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
	int arr[row][col];
	
	printf("Enter a frist array\n");
	input(row,col,arr1,arr);
	printf("Transposed array\n");	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
