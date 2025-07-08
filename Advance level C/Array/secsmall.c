#include<stdio.h>
int main(){
	int i, len, small, secsmall;
	int arr[] = {20, -8, 55, 3, -10, 18};
	small = arr[0];
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i <= len-1; i++){
		if(small > arr[i]){
			secsmall = small;
			small = arr[i];
		}else if(arr[i] < secsmall && arr[i] != small){
			secsmall = arr[i];
		}
	}
	printf("%d is the smallist number in array\n",small);
	printf("%d is seconed smallest number in array\n",secsmall);
	return 0;
}
