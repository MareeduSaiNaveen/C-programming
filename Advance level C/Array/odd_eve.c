#include<stdio.h>
int main(){
	int size, arr[50], i, k = 0, j = 0, eve[50], odd[50];
	printf("Enter a size of array : ");
	scanf("%d", &size);
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		if(arr[i] % 2 == 0){
			eve[j++] = arr[i];
		}else{
			odd[k++] = arr[i];
		}
	}printf("Even array : ");
	for(i = 0; i < j; i++){
		printf("%d ", eve[i]);
	}printf("\nOdd array : ");
	for(i = 0; i < k; i++){
		printf("%d ", odd[i]);
	}printf("\n");
	return 0;
}
