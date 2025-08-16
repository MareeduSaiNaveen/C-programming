#include<stdio.h>
int main(){
	int size, i, j, count = 0;
	printf("Enter a size : ");
	scanf("%d", &size);
	int arr[size][size];
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &arr[i][j]);
		}
	}for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(i >= j){
				printf("%d", arr[i][j]);
			}
		}printf("\n");
	}printf("-------------------\n");
	for(i = 0; i < size; i++){
		for(j = 0; j < i; j++){
			printf(" ");
		}for(int k = i; k < size; k++){
			printf("%d", arr[i][k]);
		}printf("\n");
	}
}
