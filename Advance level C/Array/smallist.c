#include<stdio.h>
int main(){
	int i, j, len, num;
	int arr[] = {45, -10, 66, -1, 22, 0, -3, 80};
	num = arr[0];
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 1; i <= len; i++){
		if(arr[i] < num){  //for smallset number in list
		//if(arr[i] > num){    // for greast number in list
			num = arr[i];
		}
	}
	printf("%d is the smallest number in array\n",num);
}
