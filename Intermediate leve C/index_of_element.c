#include<stdio.h>
int main(){
	int i, j, len, temp = 0, n;
	printf("Enter a number to find element : ");
	scanf("%d",&n);
	int arr[] = {5, 9, -3, 6, -2, 0,};
	len = sizeof(arr)/sizeof(arr[0]);
	if(len < n){
		printf("Invaled input\n");
		return 0;
	}
	for(i = 0; i < len; i++){
		for(j = 0; j < len-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("%d element of array is %d\n", n, arr[n-1]);
	return 0;
}
