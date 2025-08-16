#include<stdio.h>
void main(){
	int size, temp, i;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}int j = 0;
	for (i = 0; i < size; i++) {
		if (arr[i] % 2 != 0){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			j++;
		}
	}
	for(i=0; i < size; i++){
		printf("%d ", arr[i]);
	}printf("\n");
}
