#include<stdio.h>
int main(){
	int size, j = 0, i, count, q = 0;
	printf("Enter a size : ");
	scanf("%d", &size);
	int arr[size];
	int dum[size];
	printf("Enter a elements in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		count = 0;
		for(j = i+1; j < size; j++){
			if(arr[i] == arr[j]){
				count = 1;
			}
		}if(!count){
			arr[q++] = arr[i];
		}
	}printf("Non-Repeated elements in array  : ");
	for(i = 0; i < q; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	return 0;
}
