#include<stdio.h>
int main(){
	int i, j;
	int n = 4, m = 2;
	int arr[][2] = {{10, 20}, {30, 40}, {50, 60}, {70, 80}};
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%d ",arr[j][i]);
		}printf("\n");
	}//printf("\n");
}
