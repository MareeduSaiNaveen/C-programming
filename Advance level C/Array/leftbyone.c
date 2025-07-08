#include<stdio.h>
int main(){
	int i, len, left;
	int arr[] = {10, 20, 30, 40, 50, 60};
	left = arr[0];
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < len-1; i++){
		arr[i] = arr[i+1];
	}arr[len-1] = left;
	for(i = 0; i < len; i++){
		printf("%d ",arr[i]);
	}printf("\n");
	return 0;
}
