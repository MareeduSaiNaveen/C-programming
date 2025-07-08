#include<stdio.h>
int main(){
	int i, j, n, m;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter a number : ");
	scanf("%d",&m);
	int arr[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			arr[i][j] =  i+j;
		}
	}for(i = 0; i < m; i++){
		for(j =0; j < m; j++){
			printf("%d ", arr[i][j]);
		}printf("\n");
	}return 0;
}
