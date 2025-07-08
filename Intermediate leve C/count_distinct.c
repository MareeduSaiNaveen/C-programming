#include<stdio.h>
int main(){
	int i, len, j, count = 0, temp;
	int arr[] = {5, 2, 5, 2, 1};
	len = sizeof(arr)/sizeof(arr[0]);
	for(i = 0; i < len; i++){
		temp = 1;
		for(j = i+1; j < len; j++){
			if(arr[i] == arr[j]){
				temp = 0;
				//break;
			}
		}
		if(temp){
			count++;
		}
	}
	printf("Total number of elements in array is : %d\n", count);
	return 0;
}
