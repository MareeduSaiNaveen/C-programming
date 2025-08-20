#include<stdio.h>
int main(){
	int row, col, i, j;
	printf("Enter a row : ");
	scanf("%d", &row);
	/*printf("Enter a col : ");
	scanf("%d", &col);*/
	col = row*2;
	int l = 1;
	int r = col-1;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if(l <= j && r >= j){
				printf("* ");
			}else{
				printf("  ");
			}
		}printf("\n");
		l++;
		r--;
	}return 0;
}
