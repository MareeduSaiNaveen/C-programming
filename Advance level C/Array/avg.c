#include<stdio.h>
int main(){
	int i, len, avg = 0;
	int arr[] = {10, 20, 10, 50, 20, 10};
	len = sizeof(arr)/sizeof(arr[0]);

	for(i = 0; i < len; i++){
		avg += arr[i];
	}
	avg /= len;
	printf("avg of arr is : %d\n", avg);
}
