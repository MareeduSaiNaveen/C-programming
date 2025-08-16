#include<stdio.h>
int main(){
	int size, i, j;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size][size];
	printf("Enter a elements on array :");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &arr[i][j]);
		}
	}for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(arr[i][j] != arr[j][i]){
				printf("It is not symmetric\n");
				return 0;
			}
		}
	}printf("It is symmetric\n");
	return 0;
}
