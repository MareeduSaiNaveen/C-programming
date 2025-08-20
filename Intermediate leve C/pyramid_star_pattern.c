#include<stdio.h>
int main(){
	int row, col, i, j;
	printf("Enter a row : ");
	scanf("%d", &row);
	/*printf("Enter a col : ");
	scanf("%d", &col);*/
	col = row*2;
	int l_mid = col/2;
	int r_mid = col/2;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if(l_mid <= j && r_mid >= j){
				printf("* ");
			}else{
				printf("  ");
			}
		}printf("\n");
		l_mid--;
		r_mid++;
	}return 0;
}
