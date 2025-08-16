#include<stdio.h>
int main(){
	int i, temp;
	int arr[] = {10, 20, 30, 40, 50};
	int arr1[] = {60, 70, 80, 90, 100};
	int *frist = arr;
	int *seconed = arr1;
	int len = sizeof(arr)/sizeof(arr[0]);
	int len1 = sizeof(arr1)/sizeof(arr1[0]);
	if(len != len1){
		return 0;
	}for(i = 0; i < len; i++){
		temp = frist[i];
		frist[i] = seconed[i];
		seconed[i] = temp;
	}for(i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}printf("\n");
	for(i = 0; i < len; i++){
		printf("%d ", arr1[i]);
	}printf("\n");
	return 0;
}
