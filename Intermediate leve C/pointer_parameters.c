#include<stdio.h>
int fun(int *arr,int *n){
	for(int i = 0; i < *n; i++){
		printf("%d ",arr[i]);
	}printf("\n");
}
int main(){
	int i;
	int arr[] = {10, 20, 30, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}printf("\n");
	fun(arr,&n);
	return 0;
}
