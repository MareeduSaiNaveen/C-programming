#include<stdio.h>
//void funcall(int col, int row,int arr[][row]){
void funcall(int col, int row,int *arr){
	int i, j;
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			//printf("%d ",arr[i][j]);
			printf("%d ", *(arr + i * row + j));
		}printf("\n");
	}
}int main(){
	int i, j, row, col;
	printf("Enter a size of coloumn : ");
	scanf("%d",&col);
	printf("Enter a size of row : ");
	scanf("%d",&row);
	int arr[col][row];
	printf("Enter a elements %d in array : ", col*row);
	for(i = 0; i < col; i++){
		for(j = 0; j < row; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	funcall(col, row, (int *)arr);

	return 0;
}
