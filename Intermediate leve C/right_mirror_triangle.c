#include<stdio.h>
int main(){
	int row, col, i, j;
	printf("Enter a row : ");
	scanf("%d", &row);
	printf("Enter a col : ");
	scanf("%d", &col);
	int len = col-1;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if(j >= len){
				printf("* ");
			}else{
				printf("  ");
			}
		}printf("\n");
		len--;
	}return 0;
}
