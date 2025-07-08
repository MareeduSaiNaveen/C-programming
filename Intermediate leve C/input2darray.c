#include<stdio.h>
int main(){
	int i, j, n, m;
	printf("Enter a number of row : ");
	scanf("%d",&n);
	printf("Enter a number of columns : ");
	scanf("%d",&m);

	int arr[n][m];
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		printf("\nSub array - %d\n",i+1);
		for(j = 0; j < m; j++){
			printf("%d ",arr[i][j]);
		}
	}
	printf("\n");
	return 0;
}
