#include<stdio.h>
int main(){
	int len, i, low, high, temp;
	int arr[] = {10, 20, 30, 40, 50, 60};
	len = sizeof(arr)/sizeof(arr[0]);
	low = 0;
	high = len-1;
	while(low < high){
		temp = arr[high];
		arr[high] = arr[low];
		arr[low] = temp;
		high--;
		low++;
	}for(i = 0; i < len; i++){
		printf("%d ",arr[i]);
	}printf("\n");
}
