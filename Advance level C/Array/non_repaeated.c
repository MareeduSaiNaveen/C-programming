#include<stdio.h>
int main(){
	int size, j, i;
	printf("Enter a size : ");
	scanf("%d", &size);
	int arr[size];
	int dum[size];
	printf("Enter a elements in array : ");
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
		dum[i] = 0;
	}for(i = 0; i < size; i++){
		if(dum[i] == 1){
			continue;
		}for(j = i+1; j < size; j++){
			if(arr[i] == arr[j]){
				dum[j] = 1;
				dum[i] = 1;
			}
		}
	}printf("Non-Repeated elements in array  : ");
	for(i = 0; i < size; i++){
		if(dum[i] == 0){
			printf("%d ", arr[i]);
		}
	}printf("\n");
	return 0;
}
