#include<stdio.h>
int main(){
	int size, i, num = 1, j, temp;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		arr[i] = num++;
	}j = size-1;
	i = 0;
	while(i < j){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
