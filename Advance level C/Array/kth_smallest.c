#include<stdio.h>
int main(){
	int temp, i, j, size, postion;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		for(j = i+1; j < size-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}printf("Enter a kth number : ");
	scanf("%d", &postion);
	printf("Kth smallest number in array : %d\n", arr[postion-1]);
	return 0;
}
