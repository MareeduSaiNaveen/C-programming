#include<stdio.h>
int main(){
	int n, i, j, num = 1, sum = 0, sum1 = 0;
	printf("Enter a size : ");
	scanf("%d", &n);
	int arr[n][n];
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			arr[i][j] = num++;
		}
	}for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i <= j){
				sum += arr[i][j];
			}if(i >= j){
				sum1 += arr[i][j];
			}
		}
	}printf("Sum of right side of diagonal : %d\n", sum);
	printf("Sum of left side of diagonal : %d\n", sum1);
	return 0;
}
