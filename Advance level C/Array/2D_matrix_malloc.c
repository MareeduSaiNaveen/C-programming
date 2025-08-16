#include<stdio.h>
#include<stdlib.h>
int main(){
	int row, col, i, j, num = 1;
	int** matrix;
	printf("Enter number of row : ");
	scanf("%d", &row);
	printf("Enter number of col :  ");
	scanf("%d", &col);

	matrix = (int**) malloc(row * sizeof(int*));
	for(i = 0; i < row; i++){
		matrix[i] = (int*) malloc(col * sizeof(int));
	}for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			*(*(matrix+i)+j) = num++;
			printf("%d ", *(*(matrix+i)+j));
		}free(matrix[i]);
		printf("\n");
	}free(matrix);
	return 0;
}
