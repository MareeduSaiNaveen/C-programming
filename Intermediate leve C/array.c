#include<stdio.h>
#include<string.h>
int main(){
	int n, y, i, len, lenn;
	printf("enter size of arrary :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter a number : ");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}printf("printing address : ");
	for(i = 0; i < n; i++){
		printf("%p, ",&arr[i]);
	}printf("\n");
	len = sizeof(arr)/sizeof(arr[0]);
	printf("size of array : %d\n", len);
	return 0;
}
