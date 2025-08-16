#include<stdio.h>
#include <limits.h>

int main(){
	int i, len, small, secsmall;
	printf("Enter a size of array : ");
	scanf("%d",&len);
	int arr[len];
	printf("enter a elemnts in array : ");
	for(i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}small = arr[0];
	secsmall = INT_MAX;
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i <= len - 1; i++){
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
