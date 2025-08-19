#include<stdio.h>
int main(){
	int size, arr[50], i, temp, j;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		for(j = i; j < size; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}printf("Descending array : ");
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
