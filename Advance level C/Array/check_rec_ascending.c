#include<stdio.h>
int check(int arr[], int max){
	if(max == 0){
		return 1;
	}if(arr[max] > arr[max-1]){
		check(arr, max-1);
	}else{
		return - 1;
	}
}int main(){
	int size, i, num = 1;
	printf("Enter a size : ");
	scanf("%d", &size);
	int arr[size];
	for(i = 0; i < size; i++){
		scanf("%d", &arr[i]);
		//arr[i] = num++;
	}i = check(arr, size-1);
	if(i == -1){
		printf("Not in assn\n");
	}else{
		printf("In assn\n");
	}return 0;
}
