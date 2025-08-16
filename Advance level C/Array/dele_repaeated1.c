#include<stdio.h>
#include<string.h>
int main(){
	int size, i, j;
	printf("Enter a size of array : ");
	scanf("%d", &size);
	int arr[size];
	int dum[size];
	printf("Enter a elements in array : ");
	memset(dum, 0, sizeof(dum));
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}for(i = 0; i < size; i++){
		if(dum[i] == 1){
			continue;
		}for(j = i+1; j < size; j++){
			if(arr[i] == arr[j]){
				dum[j] = 1;
			}
		}
	}printf("repedted elements in array : ");
	for(i = 0; i < size; i++){
		if(dum[i] == 1){
			printf("%d ", arr[i]);
		}
	}printf("\n");
	return 0;
}
